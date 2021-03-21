#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// <<, >> cout에서는 오버라이딩으로 사용방법을 강제로 변경했다.

	// << left shift
	// >> right shift
	// ~(NOT), &(AND), |(OR), ^(XOR)

	unsigned int a = 3;

	// <> 기호 template
	cout << bitset<4>(a) << endl; // std::bitset<길이>(변환하고자하는 int, float)
	
	unsigned int b = a << 1;

	cout << bitset<4>(b) << endl;
	cout << bitset<4>(b << 1) << endl; // 저장 안됨
	cout << bitset<4>(b) << endl;

	unsigned int c = b << 1;

	cout << bitset<4>(c) << endl;
	cout << bitset<4>(c << 1) << endl; 
	cout << bitset<4>(c << 2) << endl; // 한번에 2개 이동도 가능 
	cout << bitset<4>(c << 3) << endl; // 다 밀리면 그냥 전부다 0나옴

	unsigned int d = 4;

	cout << bitset<8>(d) << "\t" << d << endl;
	cout << bitset<8>(d << 1) << "\t" << (d << 1) << endl;
	cout << bitset<8>(d << 2) << "\t" << (d << 2) << endl;
	cout << bitset<8>(d << 3) << "\t" << (d << 3) << endl;
	cout << bitset<8>(d << 4) << "\t" << (d << 4) << endl;
	cout << bitset<8>(d << 5) << "\t" << (d << 5) << endl;

	// >> 마찬가지의 결과가 나옴

	// NOT ~(bitwise) !(logical)
	cout << bitset<8>(d) << "\t" << d << endl;
	cout << bitset<8>(~d) << "\t" << (~d) << endl;

	// AND, OR
	unsigned int a_ = 0b1100; // 2진수 표기 방법 // 0x 는 16진수 표기
	unsigned int b_ = 0b0110;

	cout << a_ << "\t" << b_ << endl; // 12, 6이 출력됨
	cout << bitset<4>(a_ & b_) << endl; // bitwise AND 둘다 1이면 1
	cout << bitset<4>(a_ | b_) << endl; // bitwise OR 둘중 하나라도 1이면 1
	cout << bitset<4>(a_ ^ b_) << endl << endl ; // bitwise XOR 둘이 같으면 0 다르면 1

	cout << bitset<4>(a_) << endl; // 1100
	cout << bitset<4>(a_) << " " << bitset<4>(a_ &= b_) << " " << bitset<4>(a_) << endl; // cout에서 AND assign을 했는데 이 줄의 모든 출력이 assign된 채로 나옴 
	// 0100 0100 0100 의 출력을 가짐

	return 0;
}