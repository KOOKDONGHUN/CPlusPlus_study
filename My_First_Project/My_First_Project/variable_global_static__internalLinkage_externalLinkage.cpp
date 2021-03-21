/*
	컴파일러는 cpp -> obj로 만들거 그걸 link함
	서로 다른 파일간에 변수를 공유(external linkage)
	같은 파일 안에서 사용하는 변수(internal linkage)

	int g_x; // external linkage 초기화를 하지않고 선언만 하는경우 다른곳에서 쓸수도 있고 안쓸수도 있음
	static int g_x; // internal linkage 다른 cpp에서 접근 할 수 없다. 초기화가 진행되지 않은 정적 변수이다.
	const int g_x(1); // 누군가가 변경할수 없는 이후에 변경될수 없는 변수이며 초기화를 무조건 해야함

	extern int g_x;
	extern const int g_x; // 어디선가는 1번만 초기화를 해야함 

	int g_y(1); // extern 이면서 초기화된 전역 변수
	static int g_y(1); // 외부(다른 파일)에서 접근할 수 없는 선언된 파일에서만 사용하는 전역변수
	const int g_y(1); // 위와 동일하나 한번 초기화가 되면 변경할 수 없음 

	extern int g_w(1); //
*/

#include <iostream>
#include "My_Constant.h"
// test.ccp

using namespace std;

//forward declaration
extern void doSomthing_other(); // extern 생략 가능

// extern int ex_a= 45; // 모든 파일을 봤을때 같은 이름을 가진 변수명이 존재하기 때문에 링크 에러가 나옴 
extern int ex_a; // 여기서도 extern 생략가능??


void doSomthing() 
{
	// 블록 안에서 할당받고 반납하고를 반복하면서 주소가 바뀔 수 있음 
	int a = 1;
	++a;
	cout << a << endl;
}

void doSomthing_static()
{
	// static은 c 만든 입장에서 보면 os로 부터 할당받은 메모리가 static이다.
	// 초기화를 무조건 해야 쓸수 있음 
	// 2번째 호출시에는 초기화를 하지 않고 이전에 저장한 메모리를 재사용 (이전에 썻던 기록을 어딘가에 저장해두기 때문)
	static int a = 1; // 글로벌과 비슷
	
	++a;
	cout << a << endl;
}

static int value = 123; // 다른 cpp파일에서 접근이 불가능 internal linkage

int main()
{
	cout << value << endl; // 123

	int value = 1;

	cout << ::value << endl; // 123 전역 변수 호출 방법
	cout << value << endl; // 1

	doSomthing();
	doSomthing();
	doSomthing();

	doSomthing_static();
	doSomthing_static();
	doSomthing_static();

	doSomthing_other();
	doSomthing_other();
	doSomthing_other();

	cout << ex_a << endl; // 13
	
	cout << "in main " << Constant::pi << &Constant::pi << endl; // test_.cpp의 pi와 메모리의 주소가 다름 ...
	
	return 0;
}