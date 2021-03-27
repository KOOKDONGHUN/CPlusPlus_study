#include <string.h>
#include <stdio.h>

/*
* strcpy - Copy a %NUL terminated string
* @dest: Where to copy the string to
* @src: Where to copy the string from
*/

char *strcpy(char *dest, const char *src) // char 포인터를 반환 하는 함수 
{
	char *tmp = dest; // tmp에 shallow copy?? tmp는 dest의 주소를 담고 있는 포인터 변수가 인줄 알았으나 dest의 값을 가진 포인터?? 가 아니라 내가 처음 생각한게 맞는듯 디버그 해보니 tmp가 가르키는 메모리 주소와 dest가 가르키는 메모리 주소가 동일함
	printf("tmp 주소 : %p, tmp 값 : %s\n", &tmp, tmp); //tmp 주소 : 0000002C0BEFFA48, tmp 값 : Destination string 여기서 tmp의 주소는 tmp가 할당된 메모리 주소이고 값은 dest와 동일한 이유는 tmp가 dest의 주소 값을 저장 하고 있기 때문
	/*
	 * src 가 null byte 일때까지 dest에 한자씩 복사한 후 리턴합니다.
	 */

	 /* 0x000000d0713cf598 / 0x000000d0713cf558 */
	while ((*dest++ = *src++) != '\0') { 
		/* 
			0x000000d0713cf599 / 0x000000d0713cf559
			0x000000d0713cf59a / 0x000000d0713cf55a
			.
			.
			.
			1byte씩 증가 (char은 1byte이기 때문 - 영어 기준)
			그렇다면 한글의 경우 ++ 한번으로 못하는거 아닌가? 한번 복사 할때 2번 넣고 2번 움직여야 하나?

		 */
		printf("dest 주소 : %p, dest 값 : %s\n", &dest, dest);
		/*
		dest 주소 : 0000002C0BEFFB50, dest 값 : estination string
		dest 주소 : 0000002C0BEFFB50, dest 값 : stination string
		*/

		printf("tmp 주소 : %p, tmp 값 : %s\n", &tmp, tmp);
		/*
		tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sestination string
		tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sostination string
		*/

		printf("src 주소 : %p, src 값 : %s\n", &src, src);
		/*
		src 주소 : 0000002C0BEFFB58, src 값 : ource string
		src 주소 : 0000002C0BEFFB58, src 값 : urce string
		*/

		printf("tmp 주소 : %p, tmp 값 : %s\n", &tmp, tmp);
		/*
		src 주소 : 0000002C0BEFFB78, src 값 : Source string
dest 주소 : 0000002C0BEFFBB8, dest 값 : Destination string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Destination string
dest 주소 : 0000002C0BEFFB50, dest 값 : estination string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sestination string
src 주소 : 0000002C0BEFFB58, src 값 : ource string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sestination string
dest 주소 : 0000002C0BEFFB50, dest 값 : stination string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sostination string
src 주소 : 0000002C0BEFFB58, src 값 : urce string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sostination string
dest 주소 : 0000002C0BEFFB50, dest 값 : tination string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Soutination string
src 주소 : 0000002C0BEFFB58, src 값 : rce string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Soutination string
dest 주소 : 0000002C0BEFFB50, dest 값 : ination string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sourination string
src 주소 : 0000002C0BEFFB58, src 값 : ce string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sourination string
dest 주소 : 0000002C0BEFFB50, dest 값 : nation string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sourcnation string
src 주소 : 0000002C0BEFFB58, src 값 : e string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sourcnation string
dest 주소 : 0000002C0BEFFB50, dest 값 : ation string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sourceation string
src 주소 : 0000002C0BEFFB58, src 값 :  string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Sourceation string
dest 주소 : 0000002C0BEFFB50, dest 값 : tion string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source tion string
src 주소 : 0000002C0BEFFB58, src 값 : string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source tion string
dest 주소 : 0000002C0BEFFB50, dest 값 : ion string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source sion string
src 주소 : 0000002C0BEFFB58, src 값 : tring
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source sion string
dest 주소 : 0000002C0BEFFB50, dest 값 : on string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source ston string
src 주소 : 0000002C0BEFFB58, src 값 : ring
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source ston string
dest 주소 : 0000002C0BEFFB50, dest 값 : n string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source strn string
src 주소 : 0000002C0BEFFB58, src 값 : ing
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source strn string
dest 주소 : 0000002C0BEFFB50, dest 값 :  string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source stri string
src 주소 : 0000002C0BEFFB58, src 값 : ng
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source stri string
dest 주소 : 0000002C0BEFFB50, dest 값 : string
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source strinstring
src 주소 : 0000002C0BEFFB58, src 값 : g
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source strinstring
dest 주소 : 0000002C0BEFFB50, dest 값 : tring
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source stringtring
src 주소 : 0000002C0BEFFB58, src 값 :
tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source stringtring
		*/

	};

	printf("tmp 주소 : %p, tmp 값 : %s\n", &tmp, tmp); //tmp 주소 : 0000002C0BEFFA48, tmp 값 : Source string

	return tmp;
}


int main(void)
{
	char src[32] = "Source string";
	char dest[32] = "Destination string";

	printf("src 주소 : %p, src 값 : %s\n",&src, src); //src 주소 : 0000002C0BEFFB78, src 값 : Source string
	printf("dest 주소 : %p, dest 값 : %s\n", &dest, dest); //dest 주소 : 0000002C0BEFFBB8, dest 값 : Destination string

	/* src 문자열을 dest 로 복사합니다. */
	strcpy(dest, src);
	printf("After strcpy, Destination is \"%s\"\n", dest); // After strcpy, Destination is "Source string"

	return 0;
}