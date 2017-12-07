#include<stdio.h>

int main()
{
	int m = 4;
	const int* p = &m;
	m = 8;
	int h = 2;
	p = &h;
	//*p = 8 //Error
	printf("%d\n",*p);


	const int n = 5;
	p = &n;
	//n = 6 //Error
	//*p = 6 //Error
	printf("%d\n",*p);

	//int *q = &n; //Error

	int *const p1 = &m;
	int j = 11;
	//p1 = &j; //Error
	m = 10;
	printf("%d\n",*p1);
	return 0;
}
