#include <iostream>
//#define PRICE_PER_ITEM = 30;// ��ũ�ζ�� �θ��� ������ c++ ������ ��� ����� �������� �����ϴ� ���� ��õ���� ���� -> ������� ���������� ������ �ִ� ������ �ʹ� �о����� ���� �� ���� �� ���� 

#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number) // ��κ��� ���¼ҽ��� ��� ����ڰ� �Ķ���� ��ü�� ���� �����ϴ� �����ϱ� ���� �̷��� �����
{
	int n = my_number;

	cout << n << endl;
}

int main()
{
	// 1.
	printNumber(1234);

	double const gravity{ 9.8 }; // ������ ������ double const �� const double �ٸ� 

	//gravity = 1.2; // �Ұ����� Ư���� ������� ���� �����ϳ� ��õ���� ���� ���� ���氡�ɼ��� �ִٸ� �Ϲ� ������ �����ϴ°��� ����

	//const int my_const(123);// ������ Ÿ�� ��� �����Ͻ� ���� ������
	constexpr int my_const(123);// ������ Ÿ�� ��� �����Ͻ� ���� ������ �׳� ���� ��Ÿ�� ����� ���е��� �ʱ� ������ c++ 11������ �� ���� �߰���


	// 2.
	int number;
	cin >> number;

	const int special_number(number); // ��Ÿ�� ��� : ����ɶ� ���� �����Ǵ� ���


	// 3.
	int num_item = 123;
	const int price_per_item = 30;

	int price = num_item * price_per_item;


	//4.
	int radius;
	cin >> radius;
	//Tip. constexpr ���� ��� �ϳ��� ���Ͽ��� �����ϴ°��� ȿ�����̴�
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}