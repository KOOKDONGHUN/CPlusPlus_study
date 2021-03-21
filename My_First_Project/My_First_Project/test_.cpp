#include <iostream>
#include "My_Constant.h"

// variable_global_static__internalLinkage_externalLinkage.cpp

extern int ex_a = 13;

void doSomthing_other()
{
	using namespace std;

	cout << "Hello" << endl;

	cout << "in test_.cpp " << Constant::pi << &Constant::pi << endl;
}