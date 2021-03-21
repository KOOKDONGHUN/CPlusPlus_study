/*
	모호성 Ambiguity
*/

#include <iostream>

namespace a
{
	int my_var(10);
}

namespace b
{
	int my_var(20);
	int count(11);
}

int main()
{
	using namespace std;
	/*using std::cout;
	using std::endl;*/

	cout << "Hello" << endl;

	using namespace a;
	//using namespace b;


	//cout << my_var << endl; //"my_var" is ambiguous
	cout << a::my_var << endl;

	{
		//using namespace b;
		//cout << count << endl; // std::count 와 겹침
		cout << b::count << endl;
	}

	return 0;
}