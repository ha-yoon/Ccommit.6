#include < stdio.h>
#include < stdlib.h>
#define EMPTY 0

typedef struct node {
	int data;
	struct node* link;
}LinkedList;

LinkedList* Getnode()
{
	// 주소를 저장할 변수 = (저장할 변수의 자료형)malloc(크기);
	LinkedList* tmp;

	tmp = (LinkedList*)malloc(sizeof(LinkedList));
	tmp->link = EMPTY;
	return tmp;
}

void Insert(LinkedList** head, int data)
{
	if (*head == EMPTY) // 첫번째 Insert
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
	// head 선언
	LinkedList* head = EMPTY;

	Insert(&head, 10);
	Insert(&head, 20);
	Insert(&head, 30);

	Search(&head, 40);

	return 0;
}

















