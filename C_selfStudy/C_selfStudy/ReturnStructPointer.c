#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person* getPerson(char* name, int age, char* address)    // Person 구조체를 반환하는 getPerson 함수 정의
{
	struct Person* p = malloc(sizeof(struct Person));

	strcpy(p->name, name);
	p->age = age;
	strcpy(p->address, address);

	return p;    // 구조체 변수 반환
}

int main()
{
	//const char* name = "국동훈"; // cpp로 만들어서 const를 붙여야했음 ...
	char* name = "국동훈"; // rvalue가 리터럴이라 그런가 ... cpp로 만들어서 const를 붙여야했음 ...
	int age = 26;
	char* address = "경기도 고양시";

	struct Person* p1;

	p1 = getPerson(name, age, address);    // 반환된 구조체 변수의 내용이 p1로 모두 복사됨

	// getPerson에서 저장한 값이 출력됨
	printf("이름: %s\n", p1->name);       // 홍길동
	printf("나이: %d\n", p1->age);        // 30
	printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동

	return 0;
}