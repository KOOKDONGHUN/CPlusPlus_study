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
	//sizeof 데이터 형의 크기를 알고싶을때 operator 임
	float a;

	sizeof(float);
	sizeof(a);
	sizeof a; // 연산자 이기때문에 가능

	// comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	/*++x;
	++y;
	z = y;*/

	cout << x << " " << y << " " << z << endl;

	z = x, y; // = 가 , 보다 우선 순위가 높음
	cout << z << endl;

	cout << x << " " << y << endl;
	z = (++x, x+y);
	cout << z << endl;


	//conditional operator == 삼항연산자 (arithmetric if)
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

	// if 문을 사용하지 않고 연산속도를 최대로 끌어 올린 간단하고 빠르게 작동하는 코딩 방법인듯 but 복잡하다면 if문 사용이 좋음 
	const int price1 = (onSale == true) ? 10 : 100;
	cout << price1 << endl;

	// const를 써야만하고 if문을 쓰고 싶다면 이렇게 한다. 예전에는 연산속도 차이로 사용하지 않았는데 요즘은 상관없다고 하더라.
	const int price2 = getPrice(onSale);
	cout << price2 << endl;

	int t = 5;
	//cout << (x % 2 == 0) ? "even" : "odd" << endl; // 연산자 우선순위 때문에 불가능 
	//cout << ((x % 2 == 0) ? 0 : "odd") << endl; // 출력의 타입이 다른경우 추천하지 않는 방법
	cout << ((x % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}