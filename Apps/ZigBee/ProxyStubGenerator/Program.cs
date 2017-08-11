
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Web.Services.Description;
using System.Xml.Schema;
using System.Xml.Serialization;
using System.CodeDom;
using System.CodeDom.Compiler;
using Microsoft.CSharp;

namespace ProxyStubGenerator
{
    class Program
    {
        static string ErrorMessage;

        static public bool GenerateWsdlProxyClass(string fileName, string generatedSourceFilename,
                    string generatedNamespace)
        {
            // erase the source file
            if (File.Exists(generatedSourceFilename))
                File.Delete(generatedSourceFilename);

            
            FileStream stream = File.Open(fileName, FileMode.Open);

            ServiceDescription sd = null;

            try
            {
                sd = ServiceDescription.Read(stream);
            }
            catch (Exception ex)
            {
                ErrorMessage = "Wsdl Download failed: " + ex.Message;
                return false;
            }

            // create an importer and associate with the ServiceDescription
            ServiceDescriptionImporter importer = new ServiceDescriptionImporter();
            importer.ProtocolName = "SOAP";
            importer.CodeGenerationOptions = CodeGenerationOptions.None;
            importer.AddServiceDescription(sd, null, null);

            // Download and inject any imported schemas (ie. WCF generated WSDL)            
            foreach (XmlSchema wsdlSchema in sd.Types.Schemas)
            {
                // Loop through all detected imports in the main schema
                foreach (XmlSchemaObject externalSchema in wsdlSchema.Includes)
                {
                    // Read each external schema into a schema object and add to importer
                    if (externalSchema is XmlSchemaImport)
                    {
                        Uri baseUri = new Uri(fileName);
                        Uri schemaUri = new Uri(baseUri, ((XmlSchemaExternal)externalSchema).SchemaLocation);

                        Stream schemaStream = File.Open(schemaUri.AbsolutePath, FileMode.Open);
                        System.Xml.Schema.XmlSchema schema = XmlSchema.Read(schemaStream, null);
                        importer.Schemas.Add(schema);
                    }
                }
            }

            // set up for code generation by creating a namespace and adding to importer
            CodeNamespace ns = new CodeNamespace(generatedNamespace);
            CodeCompileUnit ccu = new CodeCompileUnit();
            ccu.Namespaces.Add(ns);
            importer.Import(ns, ccu);

            // final code generation in specified language
            CSharpCodeProvider provider = new CSharpCodeProvider();
            IndentedTextWriter tw = new IndentedTextWriter(new StreamWriter(generatedSourceFilename));
            provider.GenerateCodeFromCompileUnit(ccu, tw, new CodeGeneratorOptions());

            tw.Close();
            stream.Close();
            return File.Exists(generatedSourceFilename);
            
            /*
            // Get a WSDL file describing a service.
            ServiceDescription description = ServiceDescription.Read(fileName);

            // Initialize a service description importer.
            ServiceDescriptionImporter importer = new ServiceDescriptionImporter();
            importer.ProtocolName = "Soap12";  // Use SOAP 1.2.
            importer.AddServiceDescription(description,null,null);

            // Report on the service descriptions.
            Console.WriteLine("Importing {0} service descriptions with {1} associated schemas.",
                              importer.ServiceDescriptions.Count, importer.Schemas.Count);

            // Generate a proxy client.
            importer.Style = ServiceDescriptionImportStyle.Client;

            // Generate properties to represent primitive values.
            importer.CodeGenerationOptions = System.Xml.Serialization.CodeGenerationOptions.GenerateProperties;

            // Initialize a Code-DOM tree into which we will import the service.
            CodeNamespace nmspace = new CodeNamespace();
            CodeCompileUnit unit = new CodeCompileUnit();
            unit.Namespaces.Add(nmspace);

            // Import the service into the Code-DOM tree. This creates proxy code 
            // that uses the service.
            ServiceDescriptionImportWarnings warning = importer.Import(nmspace,unit);

            if (warning == 0)
            {
                // Generate and print the proxy code in C#.
                CodeDomProvider provider = CodeDomProvider.CreateProvider("CSharp");
                provider.GenerateCodeFromCompileUnit(unit, Console.Out, new CodeGeneratorOptions());
            }
            else
            {
                // Print an error message.
                Console.WriteLine(warning);
            }
            Console.ReadKey();
            return true;
             */
        }

        static void Main(string[] args)
        {
            if (args.Count() < 3)
            {
                Console.WriteLine("Usage: ProxyStubGenerator.exe <fileName> <generatedSourceFilename> <generatedNamespace>");
            }
            else
            {
                GenerateWsdlProxyClass(args[0], args[1], args[2]);
            }
        }
    }
}
