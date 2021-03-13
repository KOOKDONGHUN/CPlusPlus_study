#include <iostream> 

using namespace std;

int main()
{
	int x(0); //int x = 0; ㅌ(0)객체지향에서 주로 사용하는 방식
 
	cout << x << " " << &x << endl;
	{
		//질문 > 영역 밖과 안에 있는 변수명이 같을때 영역 안과 밖의 변수를 구분하는 방법??

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