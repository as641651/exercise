#include<iostream>

void toh(int,int,int,int);

int steps;

int main()
{
	int n;
	std::cout << "Enter the number of discs: " << std::endl;
	std::cin >> n;
	steps = 0;
	toh(n,1,2,3);
	std::cout << "Total Steps : " << steps << std::endl;
	return 0;
}

void toh(int n,int A, int B, int C)
{
	if(n==1)
	{
		std::cout << A << "--->" << C << std::endl;
		steps = steps+1;
	}
	else
	{	
		toh(n-1,A,C,B);
		toh(1,A,B,C);
		toh(n-1,B,A,C);
	}
}
