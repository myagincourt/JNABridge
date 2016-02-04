using System.Resources;

namespace JNABridge.DataAdapter
{
    class Logic
    {
        /// <summary>
        /// Do something with input, and give back some output...
        /// </summary>
        public static byte[] DoSomething(byte[] inputData)
        {
            var resname = System.Text.Encoding.UTF8.GetString(inputData);
            var rm = new ResourceManager("JNABridge.DataAdapter.Properties.Resources", typeof(Logic).Assembly);

            return (byte[]) rm.GetObject(resname);
        }
    }
}
