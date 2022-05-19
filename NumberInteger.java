
public class NumberInteger {
	public static void main(String args[]) {
		{
			int i = 0 ;
			System.out.println("int i = "+i+" ;") ;
			System.out.println("Integer.BYTES : "+Integer.BYTES) ;
			System.out.println("------------------------------------------------------------------------------") ;
		}
		
		{
			byte b = 0 ;
			System.out.println("byte b = "+b+" ; // 0x00 : " + (byte)0x00 + ", 0x7F : " + (byte)0x7F + ", 0x80 : " + (byte)0x80 + ", 0xFF : " + (byte)0xFF) ;
			System.out.println(String.format("byte b = %d ; // 0x%02X : %d, 0x%02X : %d, 0x%02X : %d, 0x%02X : %d", b, (byte)0, (byte)0, Byte.MAX_VALUE, Byte.MAX_VALUE, Byte.MIN_VALUE, Byte.MIN_VALUE, (byte)-1, (byte)-1)) ;
			System.out.println("Byte.BYTES : "+Byte.BYTES+  " Byte, Byte.SIZE : "+Byte.SIZE+  " Bit, Byte.MIN_VALUE : "+ Byte.MIN_VALUE + ", Byte.MAX_VALUE : "+ Byte.MAX_VALUE ) ;
			System.out.println("------------------------------------------------------------------------------") ;
		}
		
		{
			short s = 0 ;
			System.out.println("short s = "+s+" ; // 0x0000 : " + (short)0x0000 + ", 0x7FFF : " + (short)0x7FFF + ", 0x8000 : " + (short)0x8000 + ", 0xFFFF : " + (short)0xFFFF) ;
			System.out.println(String.format("short s = %d ; // 0x%04X : %d, 0x%04X : %d, 0x%04X : %d, 0x%04X : %d", s, (short)0, (short)0, Short.MAX_VALUE, Short.MAX_VALUE, Short.MIN_VALUE, Short.MIN_VALUE, (short)-1, (short)-1)) ;
			System.out.println("Short.BYTES : "+Short.BYTES+  " Byte, Short.SIZE : "+Short.SIZE+  " Bit, Short.MIN_VALUE : "+ Short.MIN_VALUE + ", Short.MAX_VALUE : "+ Short.MAX_VALUE ) ;
			System.out.println("------------------------------------------------------------------------------") ;
		}
		
		{
			int i = 0 ;
			System.out.println("int i = "+i+" ; // 0x00000000 : " + 0x00000000 + ", 0x7FFFFFFF : " + 0x7FFFFFFF + ", 0x80000000 : " + 0x80000000 + ", 0xFFFFFFFF : " + 0xFFFFFFFF) ;
			System.out.println(String.format("int i = %d ; // 0x%08X : %d, 0x%08X : %d, 0x%08X : %d, 0x%08X : %d", i, (int)0, (int)0, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MIN_VALUE, Integer.MIN_VALUE, (int)-1, (int)-1)) ;
			System.out.println("Integer.BYTES : "+Integer.BYTES+  " Byte, Integer.SIZE : "+Integer.SIZE+ " Bit, Integer.MIN_VALUE : "+ Integer.MIN_VALUE + ", Integer.MAX_VALUE : "+ Integer.MAX_VALUE ) ;
			System.out.println("------------------------------------------------------------------------------") ;
		}
		
		{
			long l = 0L ;
			System.out.println("long l = "+l+"L ; // 0x0000000000000000L : " + 0x0000000000000000L + ", 0x7FFFFFFFFFFFFFFFL : " + 0x7FFFFFFFFFFFFFFFL + ", 0x8000000000000000L : " + 0x8000000000000000L + ", 0xFFFFFFFFFFFFFFFFL : " + 0xFFFFFFFFFFFFFFFFL) ;
			System.out.println(String.format("long l = %dL ; // 0x%016XL : %d, 0x%016XL : %d, 0x%016XL : %d, 0x%016XL : %d", l, (long)0, (long)0, Long.MAX_VALUE, Long.MAX_VALUE, Long.MIN_VALUE, Long.MIN_VALUE, (long)-1, (long)-1)) ;
			System.out.println("Long.BYTES : "+Long.BYTES+  " Byte, Long.SIZE : "+Long.SIZE+ " Bit, Long.MIN_VALUE : "+ Long.MIN_VALUE + ", Long.MAX_VALUE : "+ Long.MAX_VALUE ) ;
			System.out.println("------------------------------------------------------------------------------") ;
		}
	}
}