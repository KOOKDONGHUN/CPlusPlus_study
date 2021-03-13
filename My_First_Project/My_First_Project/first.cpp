/*
프로그램을 실행시키는 것은 운영체제를 통해 명령을 내린다.

목적코드를 컴파일 하여 운영체제에 전달

프로그램의 최소 단위를 함수로 생각하자

main은 프로그램이 시작할때 가장 먼저 찾는 함수 이름 없다면 실행 되지 않음

object 객체 -> 메모리에 저장되어 있는 정보다
variables 변수 -> 주소의 이름 정의
initialization 초기화
assignment 대입


출력형식 함수명(입력형식)
{
	1+1 // Expressions([표현]식) 뒤에 세미콜론이 없는 경우
	1 + 1; // statements(명령문) 있는 경우

	//운영체제에게 프로그램의 종료를 알려줌
	return 0;
}
*/

// 남이 만들어놓은 것들(library)  preprocessor directive
#include <iostream> // cout, cin, endl ...
#include <cstdio> // printf

int main() 
{
	/*
	숫자들을 리터럴(literal) 이라고 부른다 
	*/

	// 변수 선언(메모리 공간 할당) 변수는 항상 초기화 하자
	// initialization
	int x = 3; 

	// assignment
	x = 5;

	int y = x + 3;
	
	// namespace std 비슷한 기능의 함수들을 묶어 놓거나 이름이 비슷한 경우 분리 하기 위해
	// << stream  또는 연산자(output operator)
	std::cout << x << std::endl;

	std::cout << &y;

	int sight = 0;

	// 마법의 물약을 먹어서 시야가 0이 됨 
	sight = 0;

	return 0;
}