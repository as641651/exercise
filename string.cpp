#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>

int main()
{
	char str[] = "WORLD";
	char str1[] = "HELLO";
	strcat(str,str1);
	printf("%c\n",str[2]);

	std::string s1 = "Hello ";
	std::string s2 = "world";
	std::string s = s1+s2;
 	std::cout << s << std::endl;
	return 0;
}
