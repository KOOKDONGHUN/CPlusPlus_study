#include <iostream>

using namespace std;

int main()
{
	cout << pow(2, 4) << "\n" << endl;

	int x = 6, y = 6;

	//전위 연산
	x = 6, y = 6;
	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << "\n" << endl;


	//후위 연산
	x = 6, y = 6;
	cout << x << " " << y << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;

	return 0;
}