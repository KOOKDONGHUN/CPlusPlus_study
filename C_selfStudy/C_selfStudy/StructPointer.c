#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

typedef struct _Data {
	char c1;
	int num1;
}Data, *PData;

int main()
{
	struct _Data *d1 = malloc(sizeof(struct _Data));    // 포인터에 구조체 크기만큼 메모리 할당
	PData d2 = malloc(sizeof(Data));

	void *ptr;    // void 포인터 선언

	d1->c1 = 'a';
	d1->num1 = 10;

	ptr = d1;    // void 포인터에 d1 할당. 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음.

	printf("%c\n", ((struct _Data *)ptr)->c1);      // 'a' : 구조체 포인터로 변환하여 멤버에 접근
	printf("%d\n", ((struct _Data *)ptr)->num1);    // 10  : 구조체 포인터로 변환하여 멤버에 접근

	printf("%c\n", ((Data *)ptr)->c1);      // 'a' : 구조체 포인터로 변환하여 멤버에 접근
	printf("%d\n", ((PData)ptr)->num1);    // 10  : 구조체 포인터로 변환하여 멤버에 접근

	printf("%d\n", '\0');    // 10  : 구조체 포인터로 변환하여 멤버에 접근

	free(d1);    // 동적 메모리 해제
	free(d2);

	return 0;
}