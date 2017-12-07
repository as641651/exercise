#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
  char *s = new char[10];
  string str;
  cin >> s;
  char *p = s;
  cout << p << endl;

  char* n;
  n = strdup("World");
  cout << n << endl;

  char n1[] = "Im not a pointer";
  cout << n1 << endl;

  return 0;
}
