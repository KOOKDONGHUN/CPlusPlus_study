#include <stdio.h>
#include <malloc.h>


int main() 
{
	int num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	{
		void* ptr;

		ptr = &num1;    // num1�� �޸� �ּҸ� void ������ ptr�� ����
		// printf("%d\n", *ptr);         // ������ ����
		printf("%d\n", *(int *)ptr);     // 10: void �����͸� int �����ͷ� ��ȯ�� �� ������

		ptr = &num2;    // num2�� �޸� �ּҸ� void ������ ptr�� ����
		// printf("%f\n", *ptr);         // ������ ����
		printf("%f\n", *(float *)ptr);   // 3.500000: void �����͸� float �����ͷ� ��ȯ�� �� ������

		ptr = &c1;      // c1�� �޸� �ּҸ� void ������ ptr�� ����
		// printf("%c\n", *ptr);         // ������ ����
		printf("%c\n", *(char *)ptr);    // a: void �����͸� char �����ͷ� ��ȯ�� �� ������
	}

	// ���� �ȵǴ� �����ε� ... ��
	//{
	//	void* ptr2 = malloc(sizeof(void*));
	//	*(int*)ptr2 = num1;

	//	//printf("%d\n", *(int*)ptr2);    // a: void �����͸� char �����ͷ� ��ȯ�� �� ������
	//	printf("%d\n", ptr2);    // a: void �����͸� char �����ͷ� ��ȯ�� �� ������

	//	free(ptr2);
	//}

	return 0;
}