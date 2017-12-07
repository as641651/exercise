#include<stdio.h>

union check{
	float f;
	int id;
}c;

int main()
{

	int i = 20;
	int *ip;
	ip = &i;

	printf("%p\t%p\t%d\n",ip,&i,*ip);
	
	return 0;

}
