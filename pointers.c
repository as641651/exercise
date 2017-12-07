#include<stdio.h>


int main()
{

	int i = 20;
	int *ip;
	int *ip1;
	//*ip1 = 0; //Thats a null pointer
       // printf("%d\n",*ip1); //Seg fault
	//ip = i; This gives seg fault. Accessing memory out of process segment
	ip = &i;
	i = 21;

	printf("%p\t%p\t%d\n",ip,&i,*ip);

	int a[] = {1,2,3,4};
	ip = a; // ref to start of array
	//ip = &a[1]; // ref fro a[1]
	printf("%d\n",*ip);//points to first position of array
	printf("%d\n",ip[0]);//Also Works!!
//	printf("%d\n",*ip++);//post increment. prints and then increments. so still prints 1
	printf("%d\n",*++ip);//increments and then prints. so prints 2. 	
	printf("%d\n",*(ip+1));
	return 0;

}
