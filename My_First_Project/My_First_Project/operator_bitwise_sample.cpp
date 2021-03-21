#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// <<, >> cout������ �������̵����� ������� ������ �����ߴ�.

	// << left shift
	// >> right shift
	// ~(NOT), &(AND), |(OR), ^(XOR)

	unsigned int a = 3;

	// <> ��ȣ template
	cout << bitset<4>(a) << endl; // std::bitset<����>(��ȯ�ϰ����ϴ� int, float)
	
	unsigned int b = a << 1;

	cout << bitset<4>(b) << endl;
	cout << bitset<4>(b << 1) << endl; // ���� �ȵ�
	cout << bitset<4>(b) << endl;

	unsigned int c = b << 1;

	cout << bitset<4>(c) << endl;
	cout << bitset<4>(c << 1) << endl; 
	cout << bitset<4>(c << 2) << endl; // �ѹ��� 2�� �̵��� ���� 
	cout << bitset<4>(c << 3) << endl; // �� �и��� �׳� ���δ� 0����

	unsigned int d = 4;

	cout << bitset<8>(d) << "\t" << d << endl;
	cout << bitset<8>(d << 1) << "\t" << (d << 1) << endl;
	cout << bitset<8>(d << 2) << "\t" << (d << 2) << endl;
	cout << bitset<8>(d << 3) << "\t" << (d << 3) << endl;
	cout << bitset<8>(d << 4) << "\t" << (d << 4) << endl;
	cout << bitset<8>(d << 5) << "\t" << (d << 5) << endl;

	// >> ���������� ����� ����

	// NOT ~(bitwise) !(logical)
	cout << bitset<8>(d) << "\t" << d << endl;
	cout << bitset<8>(~d) << "\t" << (~d) << endl;

	// AND, OR
	unsigned int a_ = 0b1100; // 2���� ǥ�� ��� // 0x �� 16���� ǥ��
	unsigned int b_ = 0b0110;

	cout << a_ << "\t" << b_ << endl; // 12, 6�� ��µ�
	cout << bitset<4>(a_ & b_) << endl; // bitwise AND �Ѵ� 1�̸� 1
	cout << bitset<4>(a_ | b_) << endl; // bitwise OR ���� �ϳ��� 1�̸� 1
	cout << bitset<4>(a_ ^ b_) << endl << endl ; // bitwise XOR ���� ������ 0 �ٸ��� 1

	cout << bitset<4>(a_) << endl; // 1100
	cout << bitset<4>(a_) << " " << bitset<4>(a_ &= b_) << " " << bitset<4>(a_) << endl; // cout���� AND assign�� �ߴµ� �� ���� ��� ����� assign�� ä�� ���� 
	// 0100 0100 0100 �� ����� ����

	return 0;
}