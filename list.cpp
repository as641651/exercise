#include <stdio.h>

typedef struct container{
	int data;
	struct container *next;
}node;

node *Last(node *list)
{
	if(list == NULL)return list;
	while(list->next != NULL)
		list = list->next;
	return list;
}


//Scope of *list is only in the function
void VLast(node *list)
{
	while(list->next != NULL)
		list = list->next;
	printf("IN Func : %p\n",list);//3
}

//This changes the list in main!!
void LLast(node **list)
{
	while((*list)->next != NULL)
		*list = (*list)->next;
	printf("IN Func : %d\n",(*list)->data);//3
}

int main()
{
	node A,B,C;

	A.data = 1;
	B.data = 2;
	C.data = 3;

	node *L = &A;
	L->next = &B;
	B.next = &C;

	node *P;
	P = Last(L);
	printf("Last (P) %d\n",P->data); //3

	//Illustration of call by value and call by reference for pointers

	printf("L : %p\n",L);//1
	VLast(L);
	printf("L : %p\n",L);//1

	LLast(&L);
	printf("L : %d\n",L->data);//3

	node D,E,F;

	D.data = 1;
	E.data = 2;
	F.data = 3;

	node Q = D;
	Q.next = &E;
	E.next = &F;

	printf("Address of Q %p\n",&Q);
	VLast(&Q); //causes seg fault. May be because it is not a pointer, it does not have access to structure member 'next'. 
	printf("Q : %d\n",Q.data);//1

	 
 
	return 0;
}
