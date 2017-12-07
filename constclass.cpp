#include<iostream>
using namespace std;

class MyClass
{
  int friend_data = 5;//this initialization only available in c++11
public:
  int data_;
  MyClass(int i):data_(i){}
  int getData()
  {
    return data_;
  }

  friend void display(const MyClass& a);

};

void display(const MyClass& a)
{
  cout << a.data_ << endl;
  cout << a.friend_data << endl;//Can access private data because it is a friend function
}

int main()
{
  MyClass a(1);
  display(a);
  //a.display(&a); //ERROR display is not a member function                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

  const MyClass b(2);
  cout << b.data_ << endl;
  //cout << b.getData() << endl; //Error
  //b.data_ = 4; //ERROR
  return 0;
}
