#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fseek, ftell, fclose 함수가 선언된 헤더 파일
#include <malloc.h>
#include <string.h>

char* my_strtok(char* str, const char* delimiters) {
	static char* pCurrent;
	char* pDelimit;

	if (str != NULL)pCurrent = str;
	else str = pCurrent;

	if (*pCurrent == NULL) return NULL;

	//문자열 점검
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
	// 더이상 자를 수 없다면 NULL반환
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

	FILE *fp = fopen("D:\\hellotensor.pbtxt", "r");    // hello.txt 파일을 읽기 모드(r)로 열기.
										   // 파일 포인터를 반환

	fseek(fp, 0, SEEK_END);    // 파일 포인터를 파일의 끝으로 이동시킴

	size = ftell(fp);          // 파일 포인터의 현재 위치를 얻음
	printf("%d\n", size);      // 893

	buffer = (char*)malloc(size + 1);    // 파일 크기 + 1바이트(문자열 마지막의 NULL)만큼 동적 메모리 할당
	memset(buffer, 0, size + 1);  // 파일 크기 + 1바이트만큼 메모리를 0으로 초기화

	temp_key = (char*)malloc(sizeof(char) * key_size); // 키의 최대 문자 길이
	memset(temp_key, 0, key_size);

	temp_val = (char*)malloc(sizeof(char) * val_size); // 값의 최대 문자 길이
	memset(temp_val, 0, val_size);

	temp = (char*)malloc(sizeof(char) * temp_size); // 값의 최대 문자 길이
	memset(temp, 0, temp_size);

	fseek(fp, 0, SEEK_SET);                // 파일 포인터를 파일의 처음으로 이동시킴

	count = fread(buffer, size, 1, fp);    // hellotensor.pbtxt에서 파일 크기만큼 값을 읽음

	//  && *buffer != ':' && *buffer != '\n' && *buffer != '{' && *buffer != '\"' && *buffer != '}'
	while (*buffer) {
		if (*buffer != ' ') {
			if (*buffer != ':' && *buffer != '\n' && *buffer != '{' && *buffer != '\"' && *buffer != '}') {
				temp[temp_cnt] = *buffer;

				if (strcmp(temp, "node") == 0) {
					
				}
				else if (strcmp(temp, "node") < 0) { // node보다 적게 들어 있음
					temp_cnt++;
					buffer++;
				}
				else { // node 보다 많이 들어 있음 
					// 몰라 아직 
				}
			}
		}
		else {
			buffer++;
			continue;
		}
	}
	//printf("%s size: %d, count: %d\n", buffer, size, count); // 파일의 내용, 파일 크기, 읽은 횟수 출력

	fclose(fp);     // 파일 포인터 닫기
	free(buffer);   // 동적 메모리 해제

	return 0;
}