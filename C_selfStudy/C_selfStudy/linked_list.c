#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

#pragma pack(push, 1)
struct NODE {             // 연결 리스트의 노드 구조체
	struct NODE *next;    // 다음 노드의 주소를 저장할 포인터
	int data;             // 데이터를 저장할 멤버
	//int data2;             // 데이터를 저장할 멤버
	//int data3;             // 데이터를 저장할 멤버
	//int data4;             // 데이터를 저장할 멤버
};
#pragma pack(pop)


void addFirst(struct NODE *target, int data)    // 기준 노드 뒤에 노드를 추가하는 함수
{
	struct NODE *newNode = malloc(sizeof(struct NODE));    // 새 노드 생성
	newNode->next = target->next;    // 새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
	newNode->data = data;            // 데이터 저장

	target->next = newNode;    // 기준 노드의 다음 노드에 새 노드를 지정
}

void delFirst(struct NODE *target)    // 기준 노드 뒤에 노드를 추가하는 함수
{
	struct NODE *newNode = target->next;    // 새 노드 생성
	target->next = newNode->next;    // 새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
	free(newNode);
}

int main()
{
	struct NODE *head = malloc(sizeof(struct NODE));    // 머리 노드 생성
														// 머리 노드는 데이터를 저장하지 않음
	int size1 = sizeof(struct NODE); // 16 힙 메모리에 생성 되기 때문에? 양 끝에 표시가 붙어서?
	int size2 = sizeof(struct NODE*); // 8
	int size3 = sizeof(int); // 4

	

	// head라는 이름의 포인터 변수를 생성 | 이 변수에 담긴 주소를 따라가면 NODE구조체가 있을 것이다.

	head->data = 300;

	printf("%d\n", head->data);

	struct NODE *node1 = malloc(sizeof(struct NODE));   // 첫 번째 노드 생성
	head->next = node1;                                 // 머리 노드 다음은 첫 번째 노드
	node1->data = 10;                                   // 첫 번째 노드에 10 저장

	struct NODE *node2 = malloc(sizeof(struct NODE));   // 두 번째 노드 생성
	node1->next = node2;                                // 첫 번째 노드 다음은 두 번째 노드
	node2->data = 20;                                   // 두 번째 노드에 20 저장

	node2->next = NULL;                                 // 두 번째 노드 다음은 노드가 없음(NULL)

	addFirst(head, 100);

	addFirst(node1, 80);

	struct NODE *curr = head->next;    // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
	while (curr != NULL)               // 포인터가 NULL이 아닐 때 계속 반복
	{
		printf("%d\n", curr->data);    // 현재 노드의 데이터 출력
		curr = curr->next;             // 포인터에 다음 노드의 주소 저장
	}

	curr = head->next;      // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
	while (curr != NULL)    // 포인터가 NULL이 아닐 때 계속 반복
	{
		struct NODE *next = curr->next;    // 현재 노드의 다음 노드 주소를 임시로 저장
		free(curr);                        // 현재 노드 메모리 해제
		curr = next;                       // 포인터에 다음 노드의 주소 저장
	}

	free(head);     // 머리 노드 메모리 해제

	return 0;
}