#include <iostream> 

using namespace std;

int main()
{
	int x(0); //int x = 0; ��(0)��ü���⿡�� �ַ� ����ϴ� ���
 
	cout << x << " " << &x << endl;
	{
		//���� > ���� �۰� �ȿ� �ִ� �������� ������ ���� �Ȱ� ���� ������ �����ϴ� ���??

		x = 1;
		//int x(0);
		cout << x << " " << &x << endl;
	}

	{
		int x(0);
		cout << x << " " << &x << endl;
	}

	cout << x << " " << &x << endl;

	return 0;
}