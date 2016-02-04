using System;

namespace JNABridge.DataAdapter
{
    public interface IDataRouting
    {
        /// <summary>
        /// Input and output strings can be anything translated to B64
        /// </summary>
        String GetData(String input);
    }
}
