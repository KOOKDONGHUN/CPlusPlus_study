#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*
	
*/

char* strcpy1(char* src) 
{
	//int size = sizeof(src); // ���ÿ����� size��� ������ �Ҵ� // 8
	//int size = sizeof(*src); // ���ÿ����� size��� ������ �Ҵ� // 1

	int size = strlen(src) + 1;

	char* dst = (char*)malloc(size); // �������� dst��� �̸����� 4byte�� �޸𸮸� �Ҵ� ���⿡�� src�� �ּҰ� ���簡 �Ǿ���� �׸��� �� �ּҸ� ���󰡸� char�� ����

	strcpy(dst, src); // dst���� src�� �ּҰ� ���� �Ǿ��� 

	dst[0] = 'b';

	return dst;
}

void* memcpy1(char* dest, char* source, size_t num) // des, pig�ּ�, 4
{
	for (int a = 0; a < num; a++) {
		//*dest++ = *source++;

		dest[a] = source[a];
	}
}



//char* strcpy(const char* src)
//{
//
//}

//char* a() 
//{
//	char* tmp = "pig";
//	char p[] = "pig";
//
//	return p;
//}


int main() 
{
	2;
	//char* p = "pig";
	//char p1[] = { 'p','i','g' }; // not string just char array
	//char p2[6] = "pig";

	////char p3[2] = { 'p','i','g' }; // 2���� 3�� ������ 
	//char p3[3] = { 'p','i','g' };
	//char p4[7] = { 'p','i','g' };
	////char p5[2] = "pig";

	char* src = "pig";

	char* dest = strcpy1(src);

	printf("%s\n", dest);

	memcpy1(dest, src, sizeof(char) * 4);

	printf("%s", dest);

	free(dest);
	//char* c = a();

	//printf("%s", c);

	return 0;
}