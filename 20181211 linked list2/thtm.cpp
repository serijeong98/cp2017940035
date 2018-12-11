//Linked List ����
#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext;//�ڽŰ� ���� ����ü�� ����Ű�� ������
}	Node;

typedef struct linkedlist{
	Node* pHead;
Node* pTail;
int nNode;
} LinkedList;

//�Լ�: averageLL()
//�Է�: ���Ḯ��Ʈ
//���: ���score�� ���(douvle)
//�μ�ȿ��: ����.
double averageLL(Node* ptr) {
	int sum = 0, count = 0;
	double average;
	while (ptr != NULL) {
		sum += ptr->score;
		count++;
		//printf("average = %f\n", averageLL(pHead));	
		ptr = ptr->pNext;
	}
	average = ((double)sum) / count;
	return average;
}

//�Լ�: returnTail()
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ������ ����� ������
//�μ�ȿ��: ����.
Node* returnTail(Node* ptr) {
	if (ptr == NULL)
		return NULL;//���Ḯ��Ʈ�� ��尡 ����.

	while (ptr != NULL) {
		if (ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}

//�Լ�: addTail()
//�Է�: ���Ḯ��Ʈ,�߰��Ϸ��� ��� ������
//���: ����
//�μ�ȿ��: �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���.
void addTail(Node* pHead, Node* pNode) {
	if (pHead == NULL) {
		printf("error can't add a tail to empty linked list\n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}

//�Լ�: printLL()ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ����
//�μ�ȿ��: ����
void printLL(LinkedList* pList) {
	Node* ptr = pList->pHead;
	while (ptr != NULL) {
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}

//�Լ�: createNode() 
//�Է�: ����
//���: ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ�Ѵ�. �� �� score=�Է�, pNext=NULL�� �Ѵ�.
//�μ�ȿ��: ����
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}

//�Լ�: addHead()
//�Է�: ���Ḯ��Ʈ ����ü ������(LinkedList*), �� ��� ������
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(LinkedList* pList, Node* pNewNode) {
	if (pList->pHead == NULL)
		pList->pTail = pNewNode;

	pNewNode->pNext = pList->pHead;//#1
	pList->pHead = pNewNode;//#2
	(pList->nNode)++;
}

int main() {
	LinkedList* pList;
	pList = (LinkedList*)malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, createNode(10));
	addHead(pList, createNode(20));
	addHead(pList, createNode(30));
	addHead(pList, createNode(40));
	printLL(pList);

	return 0;
}

