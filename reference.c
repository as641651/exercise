#include<stdio.h>

//can be done only in c++
void swap(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}


//c style
void swap1(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int i;
	//int j;
	int &j = i;//does not compile in c
	printf("%p\t%p\n",&i,&j);

	int a = 10, b = 20;
	printf("A : %d, B : %d\n",a,b);
	swap1(&a,&b);
	//swap(a,b); This is also right
	printf("A : %d, B : %d\n",a,b);
	return 0;
}

