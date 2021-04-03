#include <stdio.h>
#include <malloc.h>

int main () 
{
	int* intPtr1 = malloc(sizeof(int));
	char* charPtr1;

	*intPtr1 = 0x12345678; // 4byte�� ����
	//numPtr2[0] = 10;

	printf("%x\n", *intPtr1); // 12345678
	printf("%x\n", intPtr1[0]); // 12345678

	charPtr1 = (char*)intPtr1;

	printf("%x\n", *(char*)intPtr1); // 78 | intPtr1�� char*�� ĳ���� �� �� �������� �ٷ� �����Ͽ��� 

	printf("%x\n", *charPtr1); // 78
	printf("%x\n", charPtr1[0]); // 78

	/* 
		�ΰ��� ������ ��� ���� �ּҸ� ����Ű���� �������� �޾ƿ��� ���� ũ��(byte)�� �ٸ�
	*/

	free(intPtr1); // free�� ���ڴ� �ּ�(������ ����)��

	short* shortPtr1 = malloc(sizeof(short)); // 2byte
	int* intPtr2;

	*shortPtr1 = 0x1234;

	intPtr2 = (int*)shortPtr1;
	
	printf("%x\n", *shortPtr1); // 1234
	printf("%x\n", *intPtr2); // fdfd1234 | ���⼭ fdfd�� ������ ��

	free(shortPtr1); // free�� ���ڴ� �ּ�(������ ����)��

	return 0;
}