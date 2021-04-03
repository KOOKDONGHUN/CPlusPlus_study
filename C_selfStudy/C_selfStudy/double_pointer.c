#include <stdio.h>
#include <malloc.h>

void malloc1(void** p, size_t size) 
{
	*p = malloc(size);
}

int main()
{
	int *numPtr2;     // int�� ������ ����

	malloc1(&numPtr2, (sizeof(int) * 3));    // int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�

	numPtr2[0] = 100;
	numPtr2[1] = 200;
	numPtr2[2] = 300;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", numPtr2[i]);
	}

	free(numPtr2);    // �������� �Ҵ��� �޸� ����

	return 0;
}