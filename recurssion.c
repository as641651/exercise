#include<stdio.h>

int factorial(int n)
{
	if(n>0)
		return n*factorial(n-1);
	else
		return 1;
}

int main()
{
	int n;
	printf("Enter a number :\n");
	scanf("%d",&n);
	printf("Factorial : %d\n",factorial(n));
}
