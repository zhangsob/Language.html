/*
	������ : �强��
	���糯 : 2018.05.02
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	{
		int i = 0;	// �⺻ ������
		printf("int i = %d;\n", i) ;
		printf("sizeof(0) = %zd byte\n", sizeof(0)) ;
		printf("sizeof(i) = %zd byte\n", sizeof(i)) ;
		printf("sizeof(int) = %zd byte\n", sizeof(int)) ;
		printf("----------------------\n") ;
	}

	{
		char c = 0;				// ������ (1Byte ������)
		signed char sc = 0;		
		unsigned char b = 0;	// ����(ASCII)�� ������ (1Byte �����)
		printf("char c = %hhi;          // 0x00 : %hhi, 0x7F : %hhi, 0x80 : %hhi, 0xFF : %hhi\n", c, (char)0x00, (char)0x7F, (char)0x80, (char)0xFF) ;
		printf("char c = %hhi;          // 0x%02hhX : %hhi, 0x%02hhX : %hhi, 0x%02hhX : %hhi, 0x%02hhX : %hhi\n", c, 0, 0, 0x7F, 0x7F, 0x80, 0x80, -1, -1) ;
		printf("signed char sc = %hhi;  // 0x00 : %hhi, 0x7F : %hhi, 0x80 : %hhi, 0xFF : %hhi\n", sc, (signed char)0x00, (signed char)0x7F, (signed char)0x80, (signed char)0xFF) ;
		printf("unsigned char b = %hhu; // 0x00 : %hhu, 0x7F : %hhu, 0x80 : %hhu, 0xFF : %hhu\n", b, (unsigned char)0x00, (unsigned char)0x7F, (unsigned char)0x80, (unsigned char)0xFF) ;
		printf("unsigned char b = %hhu; // 0x%02hhX : %hhu, 0x%02hhX : %hhu, 0x%02hhX : %hhu, 0x%02hhX : %hhu\n", b, 0, 0, 0x7F, 0x7F, 0x80, 0x80, -1, -1) ;
		printf("sizeof(c) = %zd byte, sizeof(sc) = %zd byte, sizeof(b) = %zd byte\n", sizeof(c), sizeof(sc), sizeof(b)) ;
		printf("sizeof(char) = %zd byte, sizeof(signed char) = %zd byte, sizeof(unsigned char) = %zd byte\n", sizeof(char), sizeof(signed char), sizeof(unsigned char)) ;
		printf("-----------------------------------------------------------------------------------------\n") ;
	}

	{
		short s = 0;				// 2Byte ������ [ 8086(XT), 80286(AT) 16bit ��ǻ�ͽ��� int�� ]
		short int si = 0;
		signed short int ssi = 0;
		unsigned short us = 0;		// 2Byte �����
		unsigned short int usi = 0;	
		printf("short s = %hi;                // 0x0000 : %hi, 0x7FFF : %hi, 0x8000 : %hi, 0xFFFF : %hi\n", s, (short)0x0000, (short)0x7FFF, (short)0x8000, (short)0xFFFF) ;
		printf("short s = %hi;                // 0x%04hX : %hi, 0x%04hX : %hi, 0x%04hX : %hi, 0x%04hX : %hi\n", s, 0, 0, 0x7FFF, 0x7FFF, 0x8000, 0x8000, -1, -1) ;
		printf("short int si = %hi;           // 0x0000 : %hi, 0x7FFF : %hi, 0x8000 : %hi, 0xFFFF : %hi\n", si, (short int)0x0000, (short int)0x7FFF, (short int)0x8000, (short int)0xFFFF) ;
		printf("signed short int ssi = %hi;   // 0x0000 : %hi, 0x7FFF : %hi, 0x8000 : %hi, 0xFFFF : %hi\n", ssi, (signed short int)0x0000, (signed short int)0x7FFF, (signed short int)0x8000, (signed short int)0xFFFF) ;
		printf("unsigned short us = %hu;      // 0x0000 : %hu, 0x7FFF : %hu, 0x8000 : %hu, 0xFFFF : %hu\n", us, (unsigned short)0x0000, (unsigned short)0x7FFF, (unsigned short)0x8000, (unsigned short)0xFFFF) ;
		printf("unsigned short us = %hu;      // 0x%04hX : %hu, 0x%04hX : %hu, 0x%04hX : %hu, 0x%04hX : %hu\n", us, 0, 0, 0x7FFF, 0x7FFF, 0x8000, 0x8000, -1, -1) ;
		printf("unsigned short int usi = %hu; // 0x0000 : %hu, 0x7FFF : %hu, 0x8000 : %hu, 0xFFFF : %hu\n", usi, (unsigned short int)0x0000, (unsigned short int)0x7FFF, (unsigned short int)0x8000, (unsigned short int)0xFFFF) ;
		printf("sizeof(s) = %zd byte, sizeof(si) = %zd byte, sizeof(ssi) = %zd byte, sizeof(us) = %zd byte, sizeof(usi) = %zd byte\n", sizeof(s), sizeof(si), sizeof(ssi), sizeof(us), sizeof(usi)) ;
		printf("sizeof(short) = %zd byte, sizeof(short int) = %zd byte, sizeof(signed short int) = %zd byte, sizeof(unsigned short) = %zd byte, sizeof(unsigned short int) = %zd byte\n", sizeof(short), sizeof(short int), sizeof(signed short int), sizeof(unsigned short), sizeof(unsigned short int)) ;
		printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------\n") ;
	}

	{
		int i = 0;				// 4Byte ������ [ 80386(32bit ��ǻ��)���� int�� ... ���ͳ��� �����ϴ� ���� ]
		signed int si = 0;
		unsigned u = 0;			// 4Byte �����
		unsigned int ui = 0;	
		printf("int i = %i;             // 0x00000000 : %i, 0x7FFFFFFF : %i, 0x80000000 : %i, 0xFFFFFFFF : %i\n", i, 0x00000000, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF) ;
		printf("int i = %i;             // 0x%08X : %i, 0x%08X : %i, 0x%08X : %i, 0x%08X : %i\n", i, 0, 0, 0x7FFFFFFF, 0x7FFFFFFF, 0x80000000, 0x80000000, -1, -1) ;
		printf("signed int si = %i;     // 0x00000000 : %i, 0x7FFFFFFF : %i, 0x80000000 : %i, 0xFFFFFFFF : %i\n", si, (signed int)0x00000000, (signed int)0x7FFFFFFF, (signed int)0x80000000, (signed int)0xFFFFFFFF) ;
		printf("unsigned u = %u;        // 0x00000000 : %u, 0x7FFFFFFF : %u, 0x80000000 : %u, 0xFFFFFFFF : %u\n", u, 0x00000000u, 0x7FFFFFFFu, 0x80000000u, 0xFFFFFFFFu) ;
		printf("unsigned u = %u;        // 0x%08X : %u, 0x%08X : %u, 0x%08X : %u, 0x%08X : %u\n", u, 0, 0, 0x7FFFFFFF, 0x7FFFFFFF, 0x80000000, 0x80000000, -1, -1) ;
		printf("unsigned int ui = %u;   // 0x00000000 : %u, 0x7FFFFFFF : %u, 0x80000000 : %u, 0xFFFFFFFF : %u\n", ui, (unsigned int)0x00000000, (unsigned int)0x7FFFFFFF, (unsigned int)0x80000000, (unsigned int)0xFFFFFFFF) ;
		printf("sizeof(i) = %zd byte, sizeof(si) = %zd byte, sizeof(u) = %zd byte, sizeof(ui) = %zd byte, sizeof(0) = %zd byte, sizeof(0u) = %zd byte\n", sizeof(i), sizeof(si), sizeof(u), sizeof(ui), sizeof(0), sizeof(0u)) ;
		printf("sizeof(int) = %zd byte, sizeof(signed int) = %zd byte, sizeof(unsigned) = %zd byte, sizeof(unsigned int) = %zd byte\n", sizeof(int), sizeof(signed int), sizeof(unsigned), sizeof(unsigned int)) ;
		printf("-------------------------------------------------------------------------------------------------------------------\n") ;
	}

	{
		long l = 0;					// 4 �Ǵ� 8 Byte ������ [ Windows x86, Windows x64 : 4 Byte, Unix(Linux) : 8 Byte ]
		signed long sl = 0;			// �� Windows�� 4 Byte�̰�, Unix�� 8 Byte�ΰ� ?
		signed long int sli = 0;	// Windows�� �ַ� �Ϲ����� ����ϴ� Client OS�̰�, Unix�� �ַ� �������� ����ϴ� Server OS�̴�.
		unsigned long ul = 0;		// Unix�� ������ �����Ͽ� Upgrade�� �����ϴ�. Windows�� �̹� 32bit������ ���ͳ����� ���� ������ �ҽ��� ������ ������ �����Ұ��Ͽ�,
		unsigned long int uli = 0;	// �׷���, 32bit���� 4 Byte�� ����ؼ� 4 Byte�� "ȭ��" �Ǿ���.
#if defined(WIN32) || defined(_WIN64)
		printf("long l = %li;                // 0x00000000 : %li, 0x7FFFFFFF : %li, 0x80000000 : %li, 0xFFFFFFFF : %li\n", l, 0x00000000L, 0x7FFFFFFFL, 0x80000000L, 0xFFFFFFFFL) ;
		printf("long l = %li;                // 0x%08lX : %li, 0x%08lX : %li, 0x%08lX : %li, 0x%08lX : %li\n", l, 0L, 0L, 0x7FFFFFFFL, 0x7FFFFFFFL, 0x80000000L, 0x80000000L, -1L, -1L) ;
		printf("signed long sl = %li;        // 0x00000000 : %li, 0x7FFFFFFF : %li, 0x80000000 : %li, 0xFFFFFFFF : %li\n", sl, (signed long)0x00000000, (signed long)0x7FFFFFFF, (signed long)0x80000000, (signed long)0xFFFFFFFF) ;
		printf("signed long int sli = %li;   // 0x00000000 : %li, 0x7FFFFFFF : %li, 0x80000000 : %li, 0xFFFFFFFF : %li\n", sli, (signed long int)0x00000000, (signed long int)0x7FFFFFFF, (signed long int)0x80000000, (signed long int)0xFFFFFFFF) ;
		printf("signed long int sli = %li;   // 0x00000000 : %li, 0x7FFFFFFF : %li, 0x80000000 : %li, 0xFFFFFFFF : %li\n", sli, (signed long int)0x00000000, (signed long int)0x7FFFFFFF, (signed long int)0x80000000, (signed long int)0xFFFFFFFF) ;
		printf("unsigned long ul = %lu;      // 0x00000000 : %lu, 0x7FFFFFFF : %lu, 0x80000000 : %lu, 0xFFFFFFFF : %lu\n", ul, (unsigned long)0x00000000, (unsigned long)0x7FFFFFFF, (unsigned long)0x80000000, (unsigned long)0xFFFFFFFF) ;
		printf("unsigned long ul = %lu;      // 0x%08lX : %lu, 0x%08lX : %lu, 0x%08lX : %lu, 0x%08lX : %lu\n", ul, 0Lu, 0Lu, 0x7FFFFFFFLu, 0x7FFFFFFFLu, 0x80000000Lu, 0x80000000Lu, -1L, -1L) ;
		printf("unsigned long int uli = %lu; // 0x00000000 : %lu, 0x7FFFFFFF : %lu, 0x80000000 : %lu, 0xFFFFFFFF : %lu\n", uli, (unsigned long int)0x00000000, (unsigned long int)0x7FFFFFFF, (unsigned long int)0x80000000, (unsigned long int)0xFFFFFFFF) ;
		printf("sizeof(l) = %zd byte, sizeof(sl) = %zd byte, sizeof(sli) = %zd byte, sizeof(ul) = %zd byte, sizeof(uli) = %zd byte, sizeof(0L) = %zd byte\n", sizeof(l), sizeof(sl), sizeof(sli), sizeof(ul), sizeof(uli), sizeof(0L)) ;
		printf("sizeof(long) = %zd byte, sizeof(signed long) = %zd byte, sizeof(signed long int) = %zd byte, sizeof(unsigned long) = %zd byte, sizeof(unsigned long int) = %zd byte\n", sizeof(long), sizeof(signed long), sizeof(signed long int), sizeof(unsigned long), sizeof(unsigned long int)) ;
		printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n") ;
#else
		printf("long l = %li;                // 0x0000000000000000 : %li, 0x7FFFFFFFFFFFFFFF : %li, 0x8000000000000000 : %li, 0xFFFFFFFFFFFFFFFF : %li\n", l, 0x0000000000000000L, 0x7FFFFFFFFFFFFFFFL, 0x8000000000000000L, 0xFFFFFFFFFFFFFFFFL) ;
		printf("long l = %li;                // 0x%016lX : %li, 0x%016lX : %li, 0x%016lX : %li, 0x%016lX : %li\n", l, 0L, 0L, 0x7FFFFFFFFFFFFFFFL, 0x7FFFFFFFFFFFFFFFL, 0x8000000000000000L, 0x8000000000000000L,-1L, -1L) ;
		printf("signed long sl = %li;        // 0x0000000000000000 : %li, 0x7FFFFFFFFFFFFFFF : %li, 0x8000000000000000 : %li, 0xFFFFFFFFFFFFFFFF : %li\n", sl, (signed long)0x0000000000000000, (signed long)0x7FFFFFFFFFFFFFFF, (signed long)0x8000000000000000, (signed long)0xFFFFFFFFFFFFFFFF) ;
		printf("signed long int sli = %li;   // 0x0000000000000000 : %li, 0x7FFFFFFFFFFFFFFF : %li, 0x8000000000000000 : %li, 0xFFFFFFFFFFFFFFFF : %li\n", sli, (signed long int)0x0000000000000000, (signed long int)0x7FFFFFFFFFFFFFFF, (signed long int)0x8000000000000000, (signed long int)0xFFFFFFFFFFFFFFFF) ;
		printf("unsigned long ul = %lu;      // 0x0000000000000000 : %lu, 0x7FFFFFFFFFFFFFFF : %lu, 0x8000000000000000 : %lu, 0xFFFFFFFFFFFFFFFF : %lu\n", ul, (unsigned long)0x0000000000000000, (unsigned long)0x7FFFFFFFFFFFFFFF, (unsigned long)0x8000000000000000, (unsigned long)0xFFFFFFFFFFFFFFFF) ;
		printf("unsigned long ul = %lu;      // 0x%016lX : %lu, 0x%016lX : %lu, 0x%016lX : %lu, 0x%016lX : %lu\n", ul, 0Lu, 0Lu, 0x7FFFFFFFFFFFFFFFLu, 0x7FFFFFFFFFFFFFFFLu, 0x8000000000000000Lu, 0x8000000000000000Lu,-1Lu, -1Lu) ;
		printf("unsigned long int uli = %lu; // 0x0000000000000000 : %lu, 0x7FFFFFFFFFFFFFFF : %lu, 0x8000000000000000 : %lu, 0xFFFFFFFFFFFFFFFF : %lu\n", uli, (unsigned long int)0x0000000000000000, (unsigned long int)0x7FFFFFFFFFFFFFFF, (unsigned long int)0x8000000000000000, (unsigned long int)0xFFFFFFFFFFFFFFFF) ;
		printf("sizeof(l) = %zd byte, sizeof(sl) = %zd byte, sizeof(sli) = %zd byte, sizeof(ul) = %zd byte, sizeof(uli) = %zd byte, sizeof(0L) = %zd byte\n", sizeof(l), sizeof(sl), sizeof(sli), sizeof(ul), sizeof(uli), sizeof(0L)) ;
		printf("sizeof(long) = %zd byte, sizeof(signed long) = %zd byte, sizeof(signed long int) = %zd byte, sizeof(unsigned long) = %zd byte, sizeof(unsigned long int) = %zd byte\n", sizeof(long), sizeof(signed long), sizeof(signed long int), sizeof(unsigned long), sizeof(unsigned long int)) ;
		printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n") ;
#endif
	}

	{
		long long ll = 0;				// 8 Byte ������ 
		signed long long sll = 0;		
		signed long long int slli = 0;	
		unsigned long long ull = 0;		// 8 Byte �����
		unsigned long long int ulli = 0;
		printf("long long ll = %lli;                // 0x0000000000000000 : %lli, 0x7FFFFFFFFFFFFFFF : %lli, 0x8000000000000000 : %lli, 0xFFFFFFFFFFFFFFFF : %lli\n", ll, (long long)0x0000000000000000, (long long)0x7FFFFFFFFFFFFFFF, (long long)0x8000000000000000, (long long)0xFFFFFFFFFFFFFFFF) ;
		printf("long long ll = %lli;                // 0x%016llX : %lli, 0x%016llX : %lli, 0x%016llX : %lli, 0x%016llX : %lli\n", ll, 0LL, 0LL, 0x7FFFFFFFFFFFFFFFLL, 0x7FFFFFFFFFFFFFFFLL, 0x8000000000000000LL, 0x8000000000000000LL, -1LL, -1LL) ;
		printf("signed long long sll = %lli;        // 0x0000000000000000 : %lli, 0x7FFFFFFFFFFFFFFF : %lli, 0x8000000000000000 : %lli, 0xFFFFFFFFFFFFFFFF : %lli\n", sll, (signed long long)0x0000000000000000, (signed long long)0x7FFFFFFFFFFFFFFF, (signed long long)0x8000000000000000, (signed long long)0xFFFFFFFFFFFFFFFF) ;
		printf("signed long long int slli = %lli;   // 0x0000000000000000 : %lli, 0x7FFFFFFFFFFFFFFF : %lli, 0x8000000000000000 : %lli, 0xFFFFFFFFFFFFFFFF : %lli\n", slli, (signed long long int)0x0000000000000000, (signed long long int)0x7FFFFFFFFFFFFFFF, (signed long long int)0x8000000000000000, (signed long long int)0xFFFFFFFFFFFFFFFF) ;
		printf("unsigned long long ull = %llu;      // 0x0000000000000000 : %llu, 0x7FFFFFFFFFFFFFFF : %llu, 0x8000000000000000 : %llu, 0xFFFFFFFFFFFFFFFF : %llu\n", ull, (unsigned long long)0x0000000000000000, (unsigned long long)0x7FFFFFFFFFFFFFFF, (unsigned long long)0x8000000000000000, (unsigned long long)0xFFFFFFFFFFFFFFFF) ;
		printf("unsigned long long ull = %llu;      // 0x%016llX : %llu, 0x%016llX : %llu, 0x%016llX : %llu, 0x%016llX : %llu\n", ull, 0LLu, 0LLu, 0x7FFFFFFFFFFFFFFFLLu, 0x7FFFFFFFFFFFFFFFLLu, 0x8000000000000000LLu, 0x8000000000000000LLu, -1LL, -1LL) ;
		printf("unsigned long long int ulli = %llu; // 0x0000000000000000 : %llu, 0x7FFFFFFFFFFFFFFF : %llu, 0x8000000000000000 : %llu, 0xFFFFFFFFFFFFFFFF : %llu\n", ulli, (unsigned long long int)0x0000000000000000, (unsigned long long int)0x7FFFFFFFFFFFFFFF, (unsigned long long int)0x8000000000000000, (unsigned long long int)0xFFFFFFFFFFFFFFFF) ;
		printf("sizeof(ll) = %zd byte, sizeof(sll) = %zd byte, sizeof(slli) = %zd byte, sizeof(ull) = %zd byte, sizeof(ulli) = %zd byte, sizeof(0LL) = %zd byte\n", sizeof(ll), sizeof(sll), sizeof(slli), sizeof(ull), sizeof(ulli), sizeof(0LL)) ;
		printf("sizeof(long long) = %zd byte, sizeof(signed long long) = %zd byte, sizeof(signed long long int) = %zd byte, sizeof(unsigned long long) = %zd byte, sizeof(unsigned long long int) = %zd byte\n", sizeof(long long), sizeof(signed long long), sizeof(signed long long int), sizeof(unsigned long long), sizeof(unsigned long long int)) ;
		printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n") ;
		printf("sizeof(sizeof(0)) : %zd Byte\n", sizeof(sizeof(0))) ;	// x86(32bit) : 4 Byte, x64(64bit) : 8 Byte
	}

	return 0 ;
}