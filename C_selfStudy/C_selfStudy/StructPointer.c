#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

typedef struct _Data {
	char c1;
	int num1;
}Data, *PData;

int main()
{
	struct _Data *d1 = malloc(sizeof(struct _Data));    // �����Ϳ� ����ü ũ�⸸ŭ �޸� �Ҵ�
	PData d2 = malloc(sizeof(Data));

	void *ptr;    // void ������ ����

	d1->c1 = 'a';
	d1->num1 = 10;

	ptr = d1;    // void �����Ϳ� d1 �Ҵ�. ������ �ڷ����� �޶� ������ ��� �߻����� ����.

	printf("%c\n", ((struct _Data *)ptr)->c1);      // 'a' : ����ü �����ͷ� ��ȯ�Ͽ� ����� ����
	printf("%d\n", ((struct _Data *)ptr)->num1);    // 10  : ����ü �����ͷ� ��ȯ�Ͽ� ����� ����

	printf("%c\n", ((Data *)ptr)->c1);      // 'a' : ����ü �����ͷ� ��ȯ�Ͽ� ����� ����
	printf("%d\n", ((PData)ptr)->num1);    // 10  : ����ü �����ͷ� ��ȯ�Ͽ� ����� ����

	printf("%d\n", '\0');    // 10  : ����ü �����ͷ� ��ȯ�Ͽ� ����� ����

	free(d1);    // ���� �޸� ����
	free(d2);

	return 0;
}