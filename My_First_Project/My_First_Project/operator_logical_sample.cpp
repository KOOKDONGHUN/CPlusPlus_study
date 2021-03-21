#include <iostream>

using namespace std;

bool XOR(bool x, bool y);

int main()
{
	//AND
	cout << (true && false) << endl;	// 0
	cout << (true && true) << endl;		// 1 (참)
	cout << (false && false) << endl;	// 0
	cout << (false && true) << endl;	// 0

	cout << endl;

	// OR
	cout << (true || false) << endl;	// 1
	cout << (true || true) << endl;		// 1
	cout << (false || false) << endl;	// 0
	cout << (false || true) << endl;	// 1

	cout << endl;

	//XOR
	cout << XOR(true , false) << endl;	// 1
	cout << XOR(true , true) << endl;	// 0
	cout << XOR(false , false) << endl;	// 0
	cout << XOR(false , true) << endl;	// 1

	// AND가 OR 보다 연산 우선순위가 높다

	return 0;
}

bool XOR(bool x, bool y)
{
	if (x != y)
	{
		return true;
	}
	else
	{
		return false;
	}
}