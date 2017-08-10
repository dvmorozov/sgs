
using System;

namespace ServPerfMon
{
    public class PerfAttrCollectorVersion
    {
        private const String Version = "Version 1.1.0.$WCREV$";

        public new static String ToString() { return Version; }
    }
}
