#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����

struct Person {
	char name[20];
	int age;
	char address[100];
};

/*struct Person getPerson()    // Person ����ü�� ��ȯ�ϴ� getPerson �Լ� ����
{
	struct Person p;

	strcpy(p.name, "ȫ�浿");
	p.age = 30;
	strcpy(p.address, "����� ��걸 �ѳ���");

	return p;    // ����ü ���� ��ȯ
}

int main()
{
	struct Person p1;

	p1 = getPerson();    // ��ȯ�� ����ü ������ ������ p1�� ��� �����

	// getPerson���� ������ ���� ��µ�
	printf("�̸�: %s\n", p1.name);       // ȫ�浿
	printf("����: %d\n", p1.age);        // 30
	printf("�ּ�: %s\n", p1.address);    // ����� ��걸 �ѳ���

	return 0;
}
*/

//struct Person getPerson(const char* name, int age, const char* address)    // const�� ���̳� �Ⱥ��̳� ���ڰ��� �־��ٶ��� const�� �ƴϿ��� ���� | ���ڷ� ���� ���� �����ؼ� ���� ������ ����� ���°ǰ� 
struct Person getPerson(char* name, int age,char* address)    // Person ����ü�� ��ȯ�ϴ� getPerson �Լ� ����
{
	struct Person p;

	strcpy(p.name, name);
	p.age = age;
	strcpy(p.address, address);

	return p;    // ����ü ���� ��ȯ
}

int main()
{
	struct Person p1;

	//const char* name = "������"; // rvalue�� ���ͷ��̶� �׷��� ... cpp�� ���� const�� �ٿ������� ...
	char* name = "������"; // rvalue�� ���ͷ��̶� �׷��� ... cpp�� ���� const�� �ٿ������� ...
	int age = 26;
	const char* address = "��⵵ ����";

	p1 = getPerson(name, age, address);    // ��ȯ�� ����ü ������ ������ p1�� ��� �����

	// getPerson���� ������ ���� ��µ�
	printf("�̸�: %s\n", p1.name);       // ȫ�浿
	printf("����: %d\n", p1.age);        // 30
	printf("�ּ�: %s\n", p1.address);    // ����� ��걸 �ѳ���

	return 0;
}