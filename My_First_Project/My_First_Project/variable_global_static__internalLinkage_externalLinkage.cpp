/*
	�����Ϸ��� cpp -> obj�� ����� �װ� link��
	���� �ٸ� ���ϰ��� ������ ����(external linkage)
	���� ���� �ȿ��� ����ϴ� ����(internal linkage)

	int g_x; // external linkage �ʱ�ȭ�� �����ʰ� ���� �ϴ°�� �ٸ������� ������ �ְ� �Ⱦ����� ����
	static int g_x; // internal linkage �ٸ� cpp���� ���� �� �� ����. �ʱ�ȭ�� ������� ���� ���� �����̴�.
	const int g_x(1); // �������� �����Ҽ� ���� ���Ŀ� ����ɼ� ���� �����̸� �ʱ�ȭ�� ������ �ؾ���

	extern int g_x;
	extern const int g_x; // ��𼱰��� 1���� �ʱ�ȭ�� �ؾ��� 

	int g_y(1); // extern �̸鼭 �ʱ�ȭ�� ���� ����
	static int g_y(1); // �ܺ�(�ٸ� ����)���� ������ �� ���� ����� ���Ͽ����� ����ϴ� ��������
	const int g_y(1); // ���� �����ϳ� �ѹ� �ʱ�ȭ�� �Ǹ� ������ �� ���� 

	extern int g_w(1); //
*/

#include <iostream>
#include "My_Constant.h"
// test.ccp

using namespace std;

//forward declaration
extern void doSomthing_other(); // extern ���� ����

// extern int ex_a= 45; // ��� ������ ������ ���� �̸��� ���� �������� �����ϱ� ������ ��ũ ������ ���� 
extern int ex_a; // ���⼭�� extern ��������??


void doSomthing() 
{
	// ��� �ȿ��� �Ҵ�ް� �ݳ��ϰ� �ݺ��ϸ鼭 �ּҰ� �ٲ� �� ���� 
	int a = 1;
	++a;
	cout << a << endl;
}

void doSomthing_static()
{
	// static�� c ���� ���忡�� ���� os�� ���� �Ҵ���� �޸𸮰� static�̴�.
	// �ʱ�ȭ�� ������ �ؾ� ���� ���� 
	// 2��° ȣ��ÿ��� �ʱ�ȭ�� ���� �ʰ� ������ ������ �޸𸮸� ���� (������ ���� ����� ��򰡿� �����صα� ����)
	static int a = 1; // �۷ι��� ���
	
	++a;
	cout << a << endl;
}

static int value = 123; // �ٸ� cpp���Ͽ��� ������ �Ұ��� internal linkage

int main()
{
	cout << value << endl; // 123

	int value = 1;

	cout << ::value << endl; // 123 ���� ���� ȣ�� ���
	cout << value << endl; // 1

	doSomthing();
	doSomthing();
	doSomthing();

	doSomthing_static();
	doSomthing_static();
	doSomthing_static();

	doSomthing_other();
	doSomthing_other();
	doSomthing_other();

	cout << ex_a << endl; // 13
	
	cout << "in main " << Constant::pi << &Constant::pi << endl; // test_.cpp�� pi�� �޸��� �ּҰ� �ٸ� ...
	
	return 0;
}