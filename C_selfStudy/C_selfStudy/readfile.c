#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fclose �Լ��� ����� ��� ����

int main()
{
	int size;
	int count;

	char* buffer;
	
	FILE *fp = fopen("D:\\hellotensor.pbtxt", "r");    // hello.txt ������ �б� ���(r)�� ����.
										   // ���� �����͸� ��ȯ

	fseek(fp, 0, SEEK_END);    // ���� �����͸� ������ ������ �̵���Ŵ

	size = ftell(fp);          // ���� �������� ���� ��ġ�� ����
	printf("%d\n", size);      // 893

	buffer = malloc(size + 1);    // ���� ũ�� + 1����Ʈ(���ڿ� �������� NULL)��ŭ ���� �޸� �Ҵ�
	memset(buffer, 0, size + 1);  // ���� ũ�� + 1����Ʈ��ŭ �޸𸮸� 0���� �ʱ�ȭ

	fseek(fp, 0, SEEK_SET);                // ���� �����͸� ������ ó������ �̵���Ŵ

	count = fread(buffer, size, 1, fp);    // hellotensor.pbtxt���� ���� ũ�⸸ŭ ���� ����

	printf("%s size: %d, count: %d\n", buffer, size, count); // ������ ����, ���� ũ��, ���� Ƚ�� ���

	fclose(fp);     // ���� ������ �ݱ�
	free(buffer);   // ���� �޸� ����

	return 0;
}