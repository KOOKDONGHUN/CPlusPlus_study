#include <stdint.h>

int main() 
{
	char a[] = "pig";
	char b[] = { 'p','i','g' }; // ���ڿ��� �ƴ� | �������� \0�� ���� 

	char c[4] = { 'p','i','g' };
	char d[] = { 'p','i','g', '\0' };

	//char* p = &a;
	//p++;
	//*p++;

	/*
	a : string (Type : char[4])
	*a : 'p' (Type : char | ASCII 112)
	&a : 0x0000002cb22ff604 {112 'p', 105 'i', 103 'g', 0 '\0' } ( Type : char[4]* | string�� ù��° �ּ�) 
	&a[0] : 0x0000002cb22ff604 "pig" (Type : char* | ������)

	�迭�� ++(����������) �ȵ� �ε����� ���� �ؾ��� (&a[index] (Type : char*), a[0] (Type : char) | �̰ɷθ� ������)
	*/

	return 0;
}