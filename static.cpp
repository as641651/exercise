#include<iostream>
using namespace std;


class MyClass
{
  //static int x = 0; //not allowed
  static int x;
  static const int  z = 0;

public:

  static int y;
  static int b;
  void print()
  {
    x = x+1;
    //y = y + 1; //If used, must be defined in global scope
    cout << x << '\t' << b << endl;
  }
};

int MyClass::x = 0;
int MyClass::b = 0;

int main()
{
  //int MyClass::y = 0; //not allowed



  MyClass x;
  MyClass y;
  x.print();
  y.print();

  //MyClass::x = 50; //Private. Not Allowed
  MyClass::b = 50;

  x.print();
  y.print();
  return 0;
}
