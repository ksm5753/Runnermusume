// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("mmxekHFOx5VxPnCTc+Wg8ulgDMPfqssI4yae7epkdvayUPP1zkbB8iHUAwfMV2Yrw45JmY1ChDL/VZbtYCbOz0pIXoFpuFPcbw1J2O4mzojn2qKtS8okUtylicxC6wpjTlNKkGTas9I7g44NmCfoD/xXBEs8TIFwuhN0/F6Sp+tjVt5dS8unhfNAZR4gSse91WEPRgZeaub13So75tWkcoKB4QleOvA5s3OtQYvXOLtKjuZFDtbbW8jTTbHXSW9okwkTJsKTEMaMhNaCq8DnQnnZY4l3zH5n0vzLsnLAQ2ByT0RLaMQKxLVPQ0NDR0JBZq0e5hswroZJyBncEjh/7IsEx/PAQ01CcsBDSEDAQ0NCwGzpVQ9OVJUnBeWlzi8+WUBBQ0JD");
        private static int[] order = new int[] { 6,8,2,11,7,7,10,7,13,12,12,12,12,13,14 };
        private static int key = 66;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
