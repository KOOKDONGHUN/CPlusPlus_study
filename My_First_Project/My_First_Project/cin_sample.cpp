#include <iostream> // cout, cin, endl ...
#include <cstdio> // printf

int main()
{
	using namespace std;

	int x = 1;

	cout << "Before your input x was " << x << endl;

	cin >> x;

	//int���� ������ �ִ� �ִ� ���ڸ� �Ѿ�� int�� ���� �� �ִ� ���� ū ���� ������
	cout << "Your input is " << x << endl;


	return 0;
}