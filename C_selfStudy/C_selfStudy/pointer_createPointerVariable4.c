#include <stdint.h>

int main() 
{
	char a[] = "pig";
	char b[] = { 'p','i','g' }; // 문자열이 아님 | 마지막이 \0가 없음 

	char c[4] = { 'p','i','g' };
	char d[] = { 'p','i','g', '\0' };

	//char* p = &a;
	//p++;
	//*p++;

	/*
	a : string (Type : char[4])
	*a : 'p' (Type : char | ASCII 112)
	&a : 0x0000002cb22ff604 {112 'p', 105 'i', 103 'g', 0 '\0' } ( Type : char[4]* | string의 첫번째 주소) 
	&a[0] : 0x0000002cb22ff604 "pig" (Type : char* | 포인터)

	배열은 ++(증감연산자) 안됨 인덱스로 접근 해야함 (&a[index] (Type : char*), a[0] (Type : char) | 이걸로만 가능함)
	*/

	return 0;
}