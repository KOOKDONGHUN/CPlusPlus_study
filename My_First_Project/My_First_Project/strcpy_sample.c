#include <string.h>
#include <stdio.h>

/*
* strcpy - Copy a %NUL terminated string
* @dest: Where to copy the string to
* @src: Where to copy the string from
*/

char *strcpy(char *dest, const char *src) // char �����͸� ��ȯ �ϴ� �Լ� 
{
	char *tmp = dest; // tmp�� shallow copy?? tmp�� dest�� �ּҸ� ��� �ִ� ������ ������ ���� �˾����� dest�� ���� ���� ������?? �� �ƴ϶� ���� ó�� �����Ѱ� �´µ� ����� �غ��� tmp�� ����Ű�� �޸� �ּҿ� dest�� ����Ű�� �޸� �ּҰ� ������
	printf("tmp �ּ� : %p, tmp �� : %s\n", &tmp, tmp); //tmp �ּ� : 0000002C0BEFFA48, tmp �� : Destination string ���⼭ tmp�� �ּҴ� tmp�� �Ҵ�� �޸� �ּ��̰� ���� dest�� ������ ������ tmp�� dest�� �ּ� ���� ���� �ϰ� �ֱ� ����
	/*
	 * src �� null byte �϶����� dest�� ���ھ� ������ �� �����մϴ�.
	 */

	 /* 0x000000d0713cf598 / 0x000000d0713cf558 */
	while ((*dest++ = *src++) != '\0') { 
		/* 
			0x000000d0713cf599 / 0x000000d0713cf559
			0x000000d0713cf59a / 0x000000d0713cf55a
			.
			.
			.
			1byte�� ���� (char�� 1byte�̱� ���� - ���� ����)
			�׷��ٸ� �ѱ��� ��� ++ �ѹ����� ���ϴ°� �ƴѰ�? �ѹ� ���� �Ҷ� 2�� �ְ� 2�� �������� �ϳ�?

		 */
		printf("dest �ּ� : %p, dest �� : %s\n", &dest, dest);
		/*
		dest �ּ� : 0000002C0BEFFB50, dest �� : estination string
		dest �ּ� : 0000002C0BEFFB50, dest �� : stination string
		*/

		printf("tmp �ּ� : %p, tmp �� : %s\n", &tmp, tmp);
		/*
		tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sestination string
		tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sostination string
		*/

		printf("src �ּ� : %p, src �� : %s\n", &src, src);
		/*
		src �ּ� : 0000002C0BEFFB58, src �� : ource string
		src �ּ� : 0000002C0BEFFB58, src �� : urce string
		*/

		printf("tmp �ּ� : %p, tmp �� : %s\n", &tmp, tmp);
		/*
		src �ּ� : 0000002C0BEFFB78, src �� : Source string
dest �ּ� : 0000002C0BEFFBB8, dest �� : Destination string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Destination string
dest �ּ� : 0000002C0BEFFB50, dest �� : estination string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sestination string
src �ּ� : 0000002C0BEFFB58, src �� : ource string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sestination string
dest �ּ� : 0000002C0BEFFB50, dest �� : stination string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sostination string
src �ּ� : 0000002C0BEFFB58, src �� : urce string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sostination string
dest �ּ� : 0000002C0BEFFB50, dest �� : tination string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Soutination string
src �ּ� : 0000002C0BEFFB58, src �� : rce string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Soutination string
dest �ּ� : 0000002C0BEFFB50, dest �� : ination string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sourination string
src �ּ� : 0000002C0BEFFB58, src �� : ce string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sourination string
dest �ּ� : 0000002C0BEFFB50, dest �� : nation string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sourcnation string
src �ּ� : 0000002C0BEFFB58, src �� : e string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sourcnation string
dest �ּ� : 0000002C0BEFFB50, dest �� : ation string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sourceation string
src �ּ� : 0000002C0BEFFB58, src �� :  string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Sourceation string
dest �ּ� : 0000002C0BEFFB50, dest �� : tion string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source tion string
src �ּ� : 0000002C0BEFFB58, src �� : string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source tion string
dest �ּ� : 0000002C0BEFFB50, dest �� : ion string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source sion string
src �ּ� : 0000002C0BEFFB58, src �� : tring
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source sion string
dest �ּ� : 0000002C0BEFFB50, dest �� : on string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source ston string
src �ּ� : 0000002C0BEFFB58, src �� : ring
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source ston string
dest �ּ� : 0000002C0BEFFB50, dest �� : n string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source strn string
src �ּ� : 0000002C0BEFFB58, src �� : ing
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source strn string
dest �ּ� : 0000002C0BEFFB50, dest �� :  string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source stri string
src �ּ� : 0000002C0BEFFB58, src �� : ng
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source stri string
dest �ּ� : 0000002C0BEFFB50, dest �� : string
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source strinstring
src �ּ� : 0000002C0BEFFB58, src �� : g
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source strinstring
dest �ּ� : 0000002C0BEFFB50, dest �� : tring
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source stringtring
src �ּ� : 0000002C0BEFFB58, src �� :
tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source stringtring
		*/

	};

	printf("tmp �ּ� : %p, tmp �� : %s\n", &tmp, tmp); //tmp �ּ� : 0000002C0BEFFA48, tmp �� : Source string

	return tmp;
}


int main(void)
{
	char src[32] = "Source string";
	char dest[32] = "Destination string";

	printf("src �ּ� : %p, src �� : %s\n",&src, src); //src �ּ� : 0000002C0BEFFB78, src �� : Source string
	printf("dest �ּ� : %p, dest �� : %s\n", &dest, dest); //dest �ּ� : 0000002C0BEFFBB8, dest �� : Destination string

	/* src ���ڿ��� dest �� �����մϴ�. */
	strcpy(dest, src);
	printf("After strcpy, Destination is \"%s\"\n", dest); // After strcpy, Destination is "Source string"

	return 0;
}