#include <stdio.h>

int main()
{
	/*
	int* numPtr;     // �ڷ��� �ʿ� *�� ����
	int * numPtr;    // �ڷ����� ���� ��� *�� ����
	int *numPtr;     // ���� �ʿ� *�� ����

	��� ������� ���� �ǹ��̴�.

	1.  %d : 10������ ��� ������
	2.  %f : �Ǽ���
	3.  %e : ������
	4.  %o : 8������ ���
	5.  %x : 16������ ���
	6.  %u : ��ȣ���� 10������ ���
	7.  %g : �Ǽ������� �ڵ� ���
	8.  %p : �������� �ּҸ� ���
	9.  %c : �ϳ��� ���ڷ� ��� ������
	10. %s : ���ڿ��� ���

	%p�� %x�� ����?? 16������ ǥ���ϴ°� ������ 16������ ���� �޸��� �ּ��̳� �ƴϳ�?

	*/

	int *numPtr; // 4byte (declaration)
	int num1 = 10; // 4byte (initialization)

	printf("sizeof(numPtr) : %d\n", sizeof(numPtr));
	printf("sizeof(num1) : %d\n\n", sizeof(num1));

	numPtr = &num1; // num1�� �ּҸ� numPtr(������ ����)�� ������ ���� (assign)

	int *numCopy = numPtr; // shallow copy ?
	int numCopy2 = *numPtr; // 

	printf("&numPtr - &num1: %d\n\n", 0x00CFFD90 - 0x00CFFD84);

	printf("numPtr : %p\n", numPtr);
	printf("numPtr : %d\n\n", numPtr); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'

	// numPtr : 00CFFD84 | num1�� �ּҿ� ���� (numPtr�� �ּҸ� ��� ���� == ������ ����)
	// numPtr: 13630852 | ����

	printf("&numPtr : %p\n", &numPtr);
	printf("&numPtr : %d\n\n", &numPtr); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int **'

	// &numPtr : 00CFFD90 | numPtr�̶�� ������ ������ �Ҵ�� �޸��� �ּ�
	// &numPtr : 13630864 | ����

	printf("*numPtr : %p\n", *numPtr); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("*numPtr : %d\n\n", *numPtr);

	// *numPtr : 0000000A | ����
	// *numPtr : 10 | numPtr�� ��� �ּҰ� ����Ű�� ���� �� numPtr -> num1 -> 10 �ణ �ɺ��� ��ũó�� ����� ����

	printf("------------------------\n");
	printf("num1 : %p\n", num1); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("num1 : %d\n\n", num1);

	// num1: 0000000A | ����
	// num1 : 10 | ���� �ʱ⿡ ������ num1�� ��

	printf("&num1 : %p\n", &num1);
	printf("&num1 : %d\n\n", &num1); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'
	
	// &num1 : 00CFFD84 | num1�� �޸� �ּ�
	// &num1 : 13630852 | ����

	printf("------------------------\n");
	printf("numCopy : %p\n", numCopy);
	printf("numCopy : %d\n\n", numCopy); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int *'

	// numCopy: 00CFFD84 | int *numCopy = numPtr; == int (�ּҸ� ��� ������ ����) = (�ּҸ� ��� �ִ� ������ ����)
	// numCopy : 13630852 | ����

	printf("&numCopy : %p\n", &numCopy);
	printf("&numCopy : %d\n\n", &numCopy); // format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'int **'

	// &numCopy : 00CFFD78 | numCopy ������ �Ҵ�� �޸� �ּ�
	// &numCopy : 13630840 | ����

	printf("*numCopy : %p\n", *numCopy); // format string '%p' requires an argument of type 'void *', but variadic argument 1 has type 'int'
	printf("*numCopy : %d\n\n", *numCopy);

	// *numCopy : 0000000A | ����
	// *numCopy : 10 | numCopy�� ����Ű�� �� numPtr�� ����

	return 0;
}