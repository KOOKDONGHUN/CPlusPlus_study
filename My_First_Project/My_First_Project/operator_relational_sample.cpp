#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	/*//int x, int y; // �̰� �Ǵ��� �˾Ҵµ� �ȵǴ°ų�
	int x, y;

	cin >> x >> y; // �ΰ��� �Է¸� �Է��Ҷ��� �������� �����Ѵ�.
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

	// float �϶��� ���迬��
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