using System;

namespace JNABridge.DataAdapter
{
    public class DataRouting : IDataRouting
    {
        /// <summary>
        /// Convert B64 to bytes, and some logic can transform them to needed object.
        /// Convert result back to B64.
        /// </summary>
        public string GetData(string input)
        {
            var inpData = Convert.FromBase64String(input);
            var outData = Logic.DoSomething(inpData);
            return Convert.ToBase64String(outData);
        }
    }
}
