#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fclose �Լ��� ����� ��� ����
#include <malloc.h>
#include <string.h>

char* my_strtok(char* str, const char* delimiters) {
	static char* pCurrent;
	char* pDelimit;

	if (str != NULL)pCurrent = str;
	else str = pCurrent;

	if (*pCurrent == NULL) return NULL;

	//���ڿ� ����
	while (*pCurrent)
	{
		pDelimit = (char*)delimiters;

		while (*pDelimit) {
			if (*pCurrent == *pDelimit) {
				*pCurrent = NULL;
				++pCurrent;
				return str;
			}
			++pDelimit;
		}
		++pCurrent;
	}
	// ���̻� �ڸ� �� ���ٸ� NULL��ȯ
	return str;
}

void open_struct(char* buffer, char* temp_key, char* temp_val) {
	if (*buffer == '{') {
		buffer++;
		open_struct(buffer, temp_key, temp_val);
		while (*buffer == '}')
		{
			open_struct(buffer, temp_key, temp_val);
			check_key(buffer, temp_key, temp_val);
			buffer++;
		}
	}
	else {
		return;
	}
}

void check_key(char* buffer, char* temp_key, char* temp_val) {
	int cnt = 0;
	while (*buffer != ' ') {
		buffer++;
		while (*buffer != ':')
		{
			temp_key[cnt] = *buffer;

			buffer++;
		}
	}
}

int main()
{
	char* buffer;
	int size;
	int count;

	char* temp_key;
	int key_size = 25;
	int key_cnt = 0;

	char* temp_val;
	int val_size = 50;
	int val_cnt = 0;

	char* temp;
	int temp_size = 20;
	int temp_cnt = 0;

	int is_node = 0;

	FILE *fp = fopen("D:\\hellotensor.pbtxt", "r");    // hello.txt ������ �б� ���(r)�� ����.
										   // ���� �����͸� ��ȯ

	fseek(fp, 0, SEEK_END);    // ���� �����͸� ������ ������ �̵���Ŵ

	size = ftell(fp);          // ���� �������� ���� ��ġ�� ����
	printf("%d\n", size);      // 893

	buffer = (char*)malloc(size + 1);    // ���� ũ�� + 1����Ʈ(���ڿ� �������� NULL)��ŭ ���� �޸� �Ҵ�
	memset(buffer, 0, size + 1);  // ���� ũ�� + 1����Ʈ��ŭ �޸𸮸� 0���� �ʱ�ȭ

	temp_key = (char*)malloc(sizeof(char) * key_size); // Ű�� �ִ� ���� ����
	memset(temp_key, 0, key_size);

	temp_val = (char*)malloc(sizeof(char) * val_size); // ���� �ִ� ���� ����
	memset(temp_val, 0, val_size);

	temp = (char*)malloc(sizeof(char) * temp_size); // ���� �ִ� ���� ����
	memset(temp, 0, temp_size);

	fseek(fp, 0, SEEK_SET);                // ���� �����͸� ������ ó������ �̵���Ŵ

	count = fread(buffer, size, 1, fp);    // hellotensor.pbtxt���� ���� ũ�⸸ŭ ���� ����

	//  && *buffer != ':' && *buffer != '\n' && *buffer != '{' && *buffer != '\"' && *buffer != '}'
	while (*buffer) {
		if (*buffer != ' ') {
			if (*buffer != ':' && *buffer != '\n' && *buffer != '{' && *buffer != '\"' && *buffer != '}') {
				temp[temp_cnt] = *buffer;

				if (strcmp(temp, "node") == 0) {
					
				}
				else if (strcmp(temp, "node") < 0) { // node���� ���� ��� ����
					temp_cnt++;
					buffer++;
				}
				else { // node ���� ���� ��� ���� 
					// ���� ���� 
				}
			}
		}
		else {
			buffer++;
			continue;
		}
	}
	//printf("%s size: %d, count: %d\n", buffer, size, count); // ������ ����, ���� ũ��, ���� Ƚ�� ���

	fclose(fp);     // ���� ������ �ݱ�
	free(buffer);   // ���� �޸� ����

	return 0;
}