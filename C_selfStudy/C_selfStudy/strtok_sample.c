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
	//char str[] = "Block D Mask.";    //구분할 문자열
	char str[] = "x + y - z + 9 = 1000";

	//str[strlen(str)] = 'p';
	//char *ptr = strtok1(str, " ");    //첫번째 strtok 사용.
	char *ptr = strtok1(str, "+-= ");    //첫번째 strtok 사용.

	while (ptr != NULL){              //ptr이 NULL일때까지 (= strtok 함수가 NULL을 반환할때까지)
		printf("[%s]\n", ptr);         //자른 문자 출력
		//ptr = strtok1(NULL, " ");     //자른 문자 다음부터 구분자 또 찾기
		ptr = strtok1(NULL, "+-= ");
	}

	printf("마지막 [%s]", str);

	//const char* str1 = "B";
	//const char* str2 = " ";
	//const char* str3 = "+";
	//const char* str4 = " ";
	//const char* str5 = "y";
	//const char* str6 = " +";

	////문자열 비교 반환값 확인
	//printf("strcmp(%s, %s)\t = %d\n", str1, str6, strcmp(str1, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str2, str6, strcmp(str2, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str3, str6, strcmp(str3, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str4, str6, strcmp(str4, str6));
	//printf("strcmp(%s, %s)\t = %d\n", str5, str6, strcmp(str5, str6));

	return 0;
}