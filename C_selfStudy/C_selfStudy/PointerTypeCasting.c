#include <stdio.h>
#include <malloc.h>

int main () 
{
	int* intPtr1 = malloc(sizeof(int));
	char* charPtr1;

	*intPtr1 = 0x12345678; // 4byte로 저장
	//numPtr2[0] = 10;

	printf("%x\n", *intPtr1); // 12345678
	printf("%x\n", intPtr1[0]); // 12345678

	charPtr1 = (char*)intPtr1;

	printf("%x\n", *(char*)intPtr1); // 78 | intPtr1을 char*로 캐스팅 한 후 역참조를 바로 실행하였음 

	printf("%x\n", *charPtr1); // 78
	printf("%x\n", charPtr1[0]); // 78

	/* 
		두개의 포인터 모두 같은 주소를 가리키지만 역참조시 받아오는 값의 크기(byte)가 다름
	*/

	free(intPtr1); // free의 인자는 주소(포인터 변수)임

	short* shortPtr1 = malloc(sizeof(short)); // 2byte
	int* intPtr2;

	*shortPtr1 = 0x1234;

	intPtr2 = (int*)shortPtr1;
	
	printf("%x\n", *shortPtr1); // 1234
	printf("%x\n", *intPtr2); // fdfd1234 | 여기서 fdfd는 쓰레기 값

	free(shortPtr1); // free의 인자는 주소(포인터 변수)임

	return 0;
}