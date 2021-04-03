#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

#pragma pack(push, 1)
struct NODE {             // ���� ����Ʈ�� ��� ����ü
	struct NODE *next;    // ���� ����� �ּҸ� ������ ������
	int data;             // �����͸� ������ ���
	//int data2;             // �����͸� ������ ���
	//int data3;             // �����͸� ������ ���
	//int data4;             // �����͸� ������ ���
};
#pragma pack(pop)


void addFirst(struct NODE *target, int data)    // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
	struct NODE *newNode = malloc(sizeof(struct NODE));    // �� ��� ����
	newNode->next = target->next;    // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
	newNode->data = data;            // ������ ����

	target->next = newNode;    // ���� ����� ���� ��忡 �� ��带 ����
}

void delFirst(struct NODE *target)    // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
	struct NODE *newNode = target->next;    // �� ��� ����
	target->next = newNode->next;    // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
	free(newNode);
}

int main()
{
	struct NODE *head = malloc(sizeof(struct NODE));    // �Ӹ� ��� ����
														// �Ӹ� ���� �����͸� �������� ����
	int size1 = sizeof(struct NODE); // 16 �� �޸𸮿� ���� �Ǳ� ������? �� ���� ǥ�ð� �پ?
	int size2 = sizeof(struct NODE*); // 8
	int size3 = sizeof(int); // 4

	

	// head��� �̸��� ������ ������ ���� | �� ������ ��� �ּҸ� ���󰡸� NODE����ü�� ���� ���̴�.

	head->data = 300;

	printf("%d\n", head->data);

	struct NODE *node1 = malloc(sizeof(struct NODE));   // ù ��° ��� ����
	head->next = node1;                                 // �Ӹ� ��� ������ ù ��° ���
	node1->data = 10;                                   // ù ��° ��忡 10 ����

	struct NODE *node2 = malloc(sizeof(struct NODE));   // �� ��° ��� ����
	node1->next = node2;                                // ù ��° ��� ������ �� ��° ���
	node2->data = 20;                                   // �� ��° ��忡 20 ����

	node2->next = NULL;                                 // �� ��° ��� ������ ��尡 ����(NULL)

	addFirst(head, 100);

	addFirst(node1, 80);

	struct NODE *curr = head->next;    // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
	while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
	{
		printf("%d\n", curr->data);    // ���� ����� ������ ���
		curr = curr->next;             // �����Ϳ� ���� ����� �ּ� ����
	}

	curr = head->next;      // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
	while (curr != NULL)    // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
	{
		struct NODE *next = curr->next;    // ���� ����� ���� ��� �ּҸ� �ӽ÷� ����
		free(curr);                        // ���� ��� �޸� ����
		curr = next;                       // �����Ϳ� ���� ����� �ּ� ����
	}

	free(head);     // �Ӹ� ��� �޸� ����

	return 0;
}