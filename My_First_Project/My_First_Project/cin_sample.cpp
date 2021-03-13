#include <iostream> // cout, cin, endl ...
#include <cstdio> // printf

int main()
{
	using namespace std;

	int x = 1;

	cout << "Before your input x was " << x << endl;

	cin >> x;

	//int형이 가질수 있는 최대 숫자를 넘어가면 int가 담을 수 있는 가장 큰 수를 보여줌
	cout << "Your input is " << x << endl;


	return 0;
}