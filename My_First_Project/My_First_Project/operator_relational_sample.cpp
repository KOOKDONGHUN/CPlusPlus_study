#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	/*//int x, int y; // 이거 되는줄 알았는데 안되는거네
	int x, y;

	cin >> x >> y; // 두개를 입력를 입력할때는 공백으로 구분한다.
	cout << "Your input values are : " << x << "\t" << y << endl;

	if (x == y)
	{
		cout << "equal" << endl;
	}
	if (x != y)
	{
		cout << "Not equal" << endl;
	}
	if (x > y)
	{
		cout << "x > y" << endl;
	}
	if (x < y)
	{
		cout << "x < y" << endl;
	}
	if (x >= y)
	{
		cout << "x >= y" << endl;
	}
	if (x <= y)
	{
		cout << "x <= y" << endl;
	}*/

	// float 일때의 관계연산
	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << setprecision(47);

	cout << d1 << endl;
	cout << d2 << endl;

	if (d1 == d2)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
		if (d1 > d2)
		{
			cout << "d1 > d2" << endl;
		}
		else
		{
			cout << "d1 < d2" << endl;
		}
	}

	cout << abs(d2-d1) << endl;
	const double epsilon = 1e-10;

	if (abs(d2 - d1) < epsilon)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "Not equla" << endl;
	}

	return 0;
}