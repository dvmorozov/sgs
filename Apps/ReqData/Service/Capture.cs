/****************************************************************************
While the underlying libraries are covered by LGPL, this sample is released 
as public domain.  It is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
or FITNESS FOR A PARTICULAR PURPOSE.  
*****************************************************************************/

using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Collections;
using System.Runtime.InteropServices;
using System.Threading;
using System.Diagnostics;

namespace DataProvider
{
    /// <summary> Summary description for MainForm. </summary>
    internal class Capture : IDisposable
    {
        #region Member variables

        /// <summary> so we can wait for the async job to finish </summary>
        private ManualResetEvent m_PictureReady = null;

        /// <summary> Indicates the status of the graph </summary>
        private bool m_bRunning = false;

        /// <summary> Dimensions of the image, calculated once in constructor. </summary>
        private IntPtr m_handle = IntPtr.Zero;
        public int m_Dropped = 0;

        #endregion

        #region API

        [DllImport("Kernel32.dll", EntryPoint="RtlMoveMemory")]
        private static extern void CopyMemory(IntPtr Destination, IntPtr Source, int Length);

        #endregion

        /// <summary> Use capture device zero, default frame rate and size</summary>
        public Capture()
        {
            _Capture(0, 0, 0, 0);
        }
        /// <summary> Use specified capture device, default frame rate and size</summary>
        public Capture(int iDeviceNum)
        {
            _Capture(iDeviceNum, 0, 0, 0);
        }
        /// <summary> Use specified capture device, specified frame rate and default size</summary>
        public Capture(int iDeviceNum, int iFrameRate)
        {
            _Capture(iDeviceNum, iFrameRate, 0, 0);
        }
        /// <summary> Use specified capture device, specified frame rate and size</summary>
        public Capture(int iDeviceNum, int iFrameRate, int iWidth, int iHeight)
        {
            _Capture(iDeviceNum, iFrameRate, iWidth, iHeight);
        }
        /// <summary> release everything. </summary>
        public void Dispose()
        {
            if (m_PictureReady != null)
            {
                m_PictureReady.Close();
                m_PictureReady = null;
            }
        }
        // Destructor
        ~Capture()
        {
            Dispose();
        }

        // Start the capture graph
        public void Start()
        {
            if (!m_bRunning)
            {
                m_bRunning = true;
            }
        }
        // Pause the capture graph.
        // Running the graph takes up a lot of resources.  Pause it when it
        // isn't needed.
        public void Pause()
        {
            if (m_bRunning)
            {
                m_bRunning = false;
            }
        }

        // Internal capture
        private void _Capture(int iDeviceNum, int iFrameRate, int iWidth, int iHeight)
        {
            try
            {
                // tell the callback to ignore new images
                m_PictureReady = new ManualResetEvent(false);
                m_bRunning = false;
            }
            catch
            {
                Dispose();
                throw;
            }
        }
    }
}
