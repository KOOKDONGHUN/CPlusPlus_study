#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

struct Person {
	char name[20];
	int age;
	char address[100];
};

/*struct Person getPerson()    // Person 구조체를 반환하는 getPerson 함수 정의
{
	struct Person p;

	strcpy(p.name, "홍길동");
	p.age = 30;
	strcpy(p.address, "서울시 용산구 한남동");

	return p;    // 구조체 변수 반환
}

int main()
{
	struct Person p1;

	p1 = getPerson();    // 반환된 구조체 변수의 내용이 p1로 모두 복사됨

	// getPerson에서 저장한 값이 출력됨
	printf("이름: %s\n", p1.name);       // 홍길동
	printf("나이: %d\n", p1.age);        // 30
	printf("주소: %s\n", p1.address);    // 서울시 용산구 한남동

	return 0;
}
*/

//struct Person getPerson(const char* name, int age, const char* address)    // const를 붙이나 안붙이나 인자값을 넣어줄때는 const가 아니여도 들어가네 | 인자로 받은 값을 복사해서 쓰기 때문에 상관이 없는건가 
struct Person getPerson(char* name, int age,char* address)    // Person 구조체를 반환하는 getPerson 함수 정의
{
	struct Person p;

	strcpy(p.name, name);
	p.age = age;
	strcpy(p.address, address);

	return p;    // 구조체 변수 반환
}

int main()
{
	struct Person p1;

	//const char* name = "국동훈"; // rvalue가 리터럴이라 그런가 ... cpp로 만들어서 const를 붙여야했음 ...
	char* name = "국동훈"; // rvalue가 리터럴이라 그런가 ... cpp로 만들어서 const를 붙여야했음 ...
	int age = 26;
	const char* address = "경기도 고양시";

	p1 = getPerson(name, age, address);    // 반환된 구조체 변수의 내용이 p1로 모두 복사됨

	// getPerson에서 저장한 값이 출력됨
	printf("이름: %s\n", p1.name);       // 홍길동
	printf("나이: %d\n", p1.age);        // 30
	printf("주소: %s\n", p1.address);    // 서울시 용산구 한남동

	return 0;
}