#include < stdio.h>
#include < stdlib.h>
#define EMPTY 0

typedef struct node {
	int data;
	struct node* link;
}LinkedList;

LinkedList* Getnode()
{
	// �ּҸ� ������ ���� = (������ ������ �ڷ���)malloc(ũ��);
	LinkedList* tmp;

	tmp = (LinkedList*)malloc(sizeof(LinkedList));
	tmp->link = EMPTY;
	return tmp;
}

void Insert(LinkedList** head, int data)
{
	if (*head == EMPTY) // ù��° Insert
	{
		*head = Getnode();
		(*head)->data = data;
	}
	else
		Insert(&(*head)->link, data);
}

void Search(LinkedList** head, int data)
{
	if ((*head)->data == data)
	{
		printf("%d Search!!\n", data);
	}else 
	{
		Search(&(*head)->link, data);
	}

}

int main()
{
	// head ����
	LinkedList* head = EMPTY;

	Insert(&head, 10);
	Insert(&head, 20);
	Insert(&head, 30);

	Search(&head, 40);

	return 0;
}

















