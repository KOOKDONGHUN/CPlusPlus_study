#include <stdio.h>
#include <malloc.h>
#include <string.h>

char* strtok1(char* src,const char* delim) 
{
	static char* src_tmp;

	if (src != NULL) {
		src_tmp = src;
	}

	if (*src_tmp == '\0') {
		return NULL;
	}

	char* ret = src_tmp;

	while (*src_tmp)
	{
		int cnt = 0;

		while (delim[cnt] != '\0') {
			if (*src_tmp == delim[cnt]) {
				*src_tmp = '\0';
				return ret;
			}
			cnt++;
		}

		src_tmp++;
	}

	return ret;
}

int main()
{
	//char str[] = "Block D Mask.";    //������ ���ڿ�
	char str[] = "x + y - z + 9 = 1000";

	//str[strlen(str)] = 'p';
	//char *ptr = strtok1(str, " ");    //ù��° strtok ���.
	char *ptr = strtok1(str, "+-= ");    //ù��° strtok ���.

	while (ptr != NULL){              //ptr�� NULL�϶����� (= strtok �Լ��� NULL�� ��ȯ�Ҷ�����)
		printf("[%s]\n", ptr);         //�ڸ� ���� ���
		//ptr = strtok1(NULL, " ");     //�ڸ� ���� �������� ������ �� ã��
		ptr = strtok1(NULL, "+-= ");
	}

	printf("������ [%s]", str);

	//const char* str1 = "B";
	//const char* str2 = " ";
	//const char* str3 = "+";
	//const char* str4 = " ";
	//const char* str5 = "y";
	//const char* str6 = " +";

	////���ڿ� �� ��ȯ�� Ȯ��
	//printf("strcmp(%s, %s)\t = %d\n", str1, str6, strcmp(str1, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str2, str6, strcmp(str2, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str3, str6, strcmp(str3, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str4, str6, strcmp(str4, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str5, str6, strcmp(str5, str6));

	return 0;
}