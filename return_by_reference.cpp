#include<iostream>
using namespace std;

int FR(int &x)
{
	cout << " &X : " << &x << std::endl;
	return x;
}

int& FRR(int &x)
{
	cout << " &X : " << &x << std::endl;
	return x;
}
int main()
{
	int a = 10;
	cout << " &A : " << &a << std::endl;
	const int &b = FR(a);
	//int &b = FR(a); Wrong! refrence var cannot be initialized to an expression
	//int b = FR(a); Thats alright
	cout << " &B : " << &b << std::endl;

	int &c = FRR(a);//Thats ok, because return is a ref.
	cout << " &C : " << &c << std::endl;
	return 0;
}
