/*
���α׷��� �����Ű�� ���� �ü���� ���� ����� ������.

�����ڵ带 ������ �Ͽ� �ü���� ����

���α׷��� �ּ� ������ �Լ��� ��������

main�� ���α׷��� �����Ҷ� ���� ���� ã�� �Լ� �̸� ���ٸ� ���� ���� ����

object ��ü -> �޸𸮿� ����Ǿ� �ִ� ������
variables ���� -> �ּ��� �̸� ����
initialization �ʱ�ȭ
assignment ����


������� �Լ���(�Է�����)
{
	1+1 // Expressions([ǥ��]��) �ڿ� �����ݷ��� ���� ���
	1 + 1; // statements(��ɹ�) �ִ� ���

	//�ü������ ���α׷��� ���Ḧ �˷���
	return 0;
}
*/

// ���� �������� �͵�(library)  preprocessor directive
#include <iostream> // cout, cin, endl ...
#include <cstdio> // printf

int main() 
{
	/*
	���ڵ��� ���ͷ�(literal) �̶�� �θ��� 
	*/

	// ���� ����(�޸� ���� �Ҵ�) ������ �׻� �ʱ�ȭ ����
	// initialization
	int x = 3; 

	// assignment
	x = 5;

	int y = x + 3;
	
	// namespace std ����� ����� �Լ����� ���� ���ų� �̸��� ����� ��� �и� �ϱ� ����
	// << stream  �Ǵ� ������(output operator)
	std::cout << x << std::endl;

	std::cout << &y;

	int sight = 0;

	// ������ ������ �Ծ �þ߰� 0�� �� 
	sight = 0;

	return 0;
}