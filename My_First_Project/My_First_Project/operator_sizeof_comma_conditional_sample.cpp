#include <iostream>

using namespace std;

int getPrice(bool onSale)
{
	if (onSale == true)
	{
		return 10;
	}
	else
	{
		return 100;
	}
}

int main()
{
	//sizeof ������ ���� ũ�⸦ �˰������ operator ��
	float a;

	sizeof(float);
	sizeof(a);
	sizeof a; // ������ �̱⶧���� ����

	// comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	/*++x;
	++y;
	z = y;*/

	cout << x << " " << y << " " << z << endl;

	z = x, y; // = �� , ���� �켱 ������ ����
	cout << z << endl;

	cout << x << " " << y << endl;
	z = (++x, x+y);
	cout << z << endl;


	//conditional operator == ���׿����� (arithmetric if)
	bool onSale = true;

	int price;

	if (onSale)
	{ 
		price = 10;
	}
	else 
	{
		price = 100;
	}
	cout << price << endl;

	// if ���� ������� �ʰ� ����ӵ��� �ִ�� ���� �ø� �����ϰ� ������ �۵��ϴ� �ڵ� ����ε� but �����ϴٸ� if�� ����� ���� 
	const int price1 = (onSale == true) ? 10 : 100;
	cout << price1 << endl;

	// const�� ��߸��ϰ� if���� ���� �ʹٸ� �̷��� �Ѵ�. �������� ����ӵ� ���̷� ������� �ʾҴµ� ������ ������ٰ� �ϴ���.
	const int price2 = getPrice(onSale);
	cout << price2 << endl;

	int t = 5;
	//cout << (x % 2 == 0) ? "even" : "odd" << endl; // ������ �켱���� ������ �Ұ��� 
	//cout << ((x % 2 == 0) ? 0 : "odd") << endl; // ����� Ÿ���� �ٸ���� ��õ���� �ʴ� ���
	cout << ((x % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}