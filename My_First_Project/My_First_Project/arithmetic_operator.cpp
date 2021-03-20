#include <iostream>

using namespace std;

int main()
{
	int x = 4;
	int y = -x; // 단항 연산자

	int c = 7;

	int z = 7 % 2;

	cout << z << endl;

	cout << c / x << endl;

	// 둘중 하나만 실수면 결과도 실수
	cout << float(c) / x << endl; // (float)랑 float() 차이?? 
	cout << c / (float)x << endl;
	cout << (float)c / (float)x << endl;

	// 주의 사항 : 음수를 나누는 경우 c++ 11 기준 소수점 이하 버림
	cout << -5 / 2 << endl; // 결과는 -2
	cout << -5 % 2 << endl; // 결과는 -1

	cout << "\a" << endl; // 결과는 -1

	return 0;
}