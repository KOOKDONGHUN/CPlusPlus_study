#include <iostream> // cout, cin, endl ...

using namespace std;

void ptintHelloWorld()
{
	cout << "Hello World" << endl;

	return;
}

int addTwoNumbers(int num1, int num2) 
{
	ptintHelloWorld();

	int sum = num1 + num2;

	return sum;
}

class MyClass 
{
public:
	int variable;
};


int main()
{
	int sum = addTwoNumbers(1, 2);

	cout << sum << endl;
	cout << addTwoNumbers(1, 3) << endl;
	cout << addTwoNumbers(1, 4) << endl;

	ptintHelloWorld();

	return 0;
}