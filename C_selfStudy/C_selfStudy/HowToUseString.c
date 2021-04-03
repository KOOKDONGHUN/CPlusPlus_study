/*#include <stdio.h>

int main()
{
	char s1 = "Hello";    // "Hello"는 문자열, 문자열은 " "로 둘러쌈

	printf("%s", s1);     // 실행 에러

	return 0;
}
	
	불가능 !! char변수 크기에 문자열을 넣을수 없음 메모리 엑세스 위반 에러 발생!!
*/

#include <stdio.h>

int main()
{
	char c1 = 'a';         // 변수에 문자 'a' 저장
	char *s1 = "Hello";    // 포인터에 문자열 "Hello"의 주소 저장

	printf("%c\n", c1);    // a: %c로 문자 출력
	printf("%s\n", s1);    // Hello: %s로 문자열 출력

	return 0;
}
