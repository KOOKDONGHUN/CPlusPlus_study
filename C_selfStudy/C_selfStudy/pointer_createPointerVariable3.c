#include <stdio.h>

/* �����͸� ����ؾ� �ϴ� ���� */

typedef struct abc
{
	int a[10000];
	char b[10000];

}ABC;

void doSomething(ABC parameter)
{
	/* do something*/
}

int main()
{
	struct abc a;
	ABC b;

	while (1) {
		doSomething(a);
	}
	
	return 0;
}