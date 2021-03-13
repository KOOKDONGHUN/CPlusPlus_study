#include <iostream> // cout, cin, endl ...
#include <cstdio> // printf

int main()
{
	using namespace std;
	int x = 1024;
	double pi = 3.14159;

	std::cout << "I love this lecture !\n"; // << std::endl;
	std::cout << " x is " << x << "pi is " << pi << std::endl;

	std::cout << "abc" << "\t" << "def" << std::endl;
	cout << "ab" << "\t" << "cdef" << endl;

	// 소리를 출력
	cout << "\a";

	return 0;
}