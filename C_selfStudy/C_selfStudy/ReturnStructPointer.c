#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person* getPerson(char* name, int age, char* address)    // Person ����ü�� ��ȯ�ϴ� getPerson �Լ� ����
{
	struct Person* p = malloc(sizeof(struct Person));

	strcpy(p->name, name);
	p->age = age;
	strcpy(p->address, address);

	return p;    // ����ü ���� ��ȯ
}

int main()
{
	//const char* name = "������"; // cpp�� ���� const�� �ٿ������� ...
	char* name = "������"; // rvalue�� ���ͷ��̶� �׷��� ... cpp�� ���� const�� �ٿ������� ...
	int age = 26;
	char* address = "��⵵ ����";

	struct Person* p1;

	p1 = getPerson(name, age, address);    // ��ȯ�� ����ü ������ ������ p1�� ��� �����

	// getPerson���� ������ ���� ��µ�
	printf("�̸�: %s\n", p1->name);       // ȫ�浿
	printf("����: %d\n", p1->age);        // 30
	printf("�ּ�: %s\n", p1->address);    // ����� ��걸 �ѳ���

	return 0;
}