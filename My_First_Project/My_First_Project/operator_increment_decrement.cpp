#include <iostream>

using namespace std;

int main()
{
	cout << pow(2, 4) << "\n" << endl;

	int x = 6, y = 6;

	//���� ����
	x = 6, y = 6;
	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << "\n" << endl;


	//���� ����
	x = 6, y = 6;
	cout << x << " " << y << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;

	return 0;
}