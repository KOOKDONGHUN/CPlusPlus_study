#include <stdio.h>
#include <malloc.h>

void malloc1(void** p, size_t size) 
{
	*p = malloc(size);
}

int main()
{
	int *numPtr2;     // int형 포인터 선언

	malloc1(&numPtr2, (sizeof(int) * 3));    // int의 크기 4바이트만큼 동적 메모리 할당

	numPtr2[0] = 100;
	numPtr2[1] = 200;
	numPtr2[2] = 300;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", numPtr2[i]);
	}

	free(numPtr2);    // 동적으로 할당한 메모리 해제

	return 0;
}