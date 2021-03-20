#include <iostream>
//#define PRICE_PER_ITEM = 30;// 매크로라고 부른다 하지만 c++ 에서는 상수 사용을 목적으로 선언하는 것은 추천하지 않음 -> 디버깅이 귀찮아지고 영향을 주는 범위가 너무 넓어지는 문제 가 있을 수 있음 

#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number) // 대부분의 오픈소스의 경우 사용자가 파라미터 자체의 값을 변경하는 방지하기 위해 이렇게 사용함
{
	int n = my_number;

	cout << n << endl;
}

int main()
{
	// 1.
	printNumber(1234);

	double const gravity{ 9.8 }; // 포인터 에서는 double const 와 const double 다름 

	//gravity = 1.2; // 불가능함 특별한 방법으로 변경 가능하나 추천하지 않음 차라리 변경가능성이 있다면 일반 변수로 선언하는것이 좋음

	//const int my_const(123);// 컴파일 타임 상수 컴파일시 값이 결정됨
	constexpr int my_const(123);// 컴파일 타임 상수 컴파일시 값이 결정됨 그냥 쓰면 런타임 상수와 구분되지 않기 때문에 c++ 11에서는 이 예약어가 추가됨


	// 2.
	int number;
	cin >> number;

	const int special_number(number); // 런타임 상수 : 실행될때 값이 결정되는 경우


	// 3.
	int num_item = 123;
	const int price_per_item = 30;

	int price = num_item * price_per_item;


	//4.
	int radius;
	cin >> radius;
	//Tip. constexpr 같은 경우 하나의 파일에서 관리하는것이 효율적이다
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}