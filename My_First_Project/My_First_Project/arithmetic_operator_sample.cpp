#include <iostream>

using namespace std;

int main()
{
	int x = 4;
	int y = -x; // ���� ������

	int c = 7;

	int z = 7 % 2;

	cout << z << endl;

	cout << c / x << endl;

	// ���� �ϳ��� �Ǽ��� ����� �Ǽ�
	cout << float(c) / x << endl; // (float)�� float() ����?? 
	cout << c / (float)x << endl;
	cout << (float)c / (float)x << endl;

	// ���� ���� : ������ ������ ��� c++ 11 ���� �Ҽ��� ���� ����
	cout << -5 / 2 << endl; // ����� -2
	cout << -5 % 2 << endl; // ����� -1

	cout << "\a" << endl; // ����� -1

	return 0;
}