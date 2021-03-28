#include <stdio.h>
#include <malloc.h>

int main()
{
	int *numPtr; // 4byte (declaration)
	int num1 = 10; // 4byte (initialization)

	printf("sizeof(numPtr) : %d\n", sizeof(numPtr));
	printf("sizeof(num1) : %d\n\n", sizeof(num1));

	numPtr = &num1; // num1�� �ּҸ� numPtr(������ ����)�� ������ ���� (assign)

	/*	numPtr = 10; ������ �ϳ� ���� �ȵ�
		���� -> 10�� assign�ϸ� numPtr�� ���� 0000000a�ε� ��κ��� �ü������ �޸��� �պκ��� Ŀ�ο��� �̴�.
		���� �̷��� ����� ���α׷����� ����ġ ���� ū ������ �߻���ų�� �ִ�. */

	/*	null pointer�� ��� 0(NULL)�� �ǹ���
		���� ��Ÿ�ӽ� (�����) �޸𸮸� �Ҵ����ִ� ������ �Ѵ�.

	*/

	int *numCopy = numPtr; // shallow copy ? (���� ���� �ٶ�)
	int numCopy2 = *numPtr; // depp copy	 (�ٸ� ���� �ٶ� | ���� ���ݱ��� �˴� �Ϲ����� ����)

	printf("���� �༮�� %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("���� �༮�� %d | %d | %d | %d\n", num1, *numPtr, *numCopy, numCopy2);
	printf("���� �༮�� %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	num1 = 11;

	printf("���� �༮�� %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("���� �༮�� %d | %d | %d\n", num1, *numPtr, *numCopy); // numCopy2�� �״���� | ���� -> �׳� �Ϲ� ������ numPtr�� 10�϶��� ������ �ʱ�ȭ �߱� ����
	printf("���� �༮�� %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	*numPtr = 12;

	printf("���� �༮�� %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("���� �༮�� %d | %d | %d\n", num1, *numPtr, *numCopy);
	printf("���� �༮�� %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	*numCopy = 13;

	printf("���� �༮�� %p | %p | %p\n", &num1, numPtr, numCopy);
	printf("���� �༮�� %d | %d | %d\n", num1, *numPtr, *numCopy);
	printf("���� �༮�� %p | %p | %p | %p\n\n", &num1, &numPtr, &numCopy, &numCopy2);

	free(numPtr);

	return 0;
}