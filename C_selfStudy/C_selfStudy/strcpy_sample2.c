#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*
	
*/

char* strcpy1(char* src) 
{
	//int size = sizeof(src); // 스택영역에 size라는 변수를 할당 // 8
	//int size = sizeof(*src); // 스택영역에 size라는 변수를 할당 // 1

	int size = strlen(src) + 1;

	char* dst = (char*)malloc(size); // 힙영역에 dst라는 이름으로 4byte의 메모리를 할당 여기에는 src의 주소가 복사가 되어야함 그리고 그 주소를 따라가면 char가 있음

	strcpy(dst, src); // dst에는 src의 주소가 복사 되었음 

	dst[0] = 'b';

	return dst;
}

void* memcpy1(char* dest, char* source, size_t num) // des, pig주소, 4
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

	////char p3[2] = { 'p','i','g' }; // 2개에 3개 못넣음 
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