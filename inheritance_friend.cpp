#include<iostream>
using namespace std;

class B
{
protected:
  int data_ = 1;

public:
//  B():data_(1){}
//ostream& operator << (ostream &os, const B &b) Binding error

  friend ostream& operator << (ostream &os, const B &b)
  {
    os << b.data_ << std::endl;
  }

  friend void display(const B& b);
};

class D : public B
{

public:
  //D():data_(2){} //Thats wrong
  D(){
    data_ = 2;
  }


};

void display(const B& b)
{
  cout << "Got here " << b.data_ << endl;
}

int main()
{
  B b;
  D d;

  cout << b << d << endl;
  display(d);
  return 0;
}
