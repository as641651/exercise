#include<iostream>
using namespace std;

class Complex
{
  float re_;
  float im_;

public:


  Complex(float r, float i):re_(r),im_(i)
  {}

  void print()
  {
    cout << re_ << ", " << im_ << endl;
  }

  //friend Complex Complex::operator+(const Complex &c); // not needed

  Complex operator+(const Complex &c)
  {
    float r = re_ + c.re_; //Memeber functions are implicitly friends of their class
    float i = im_ + c.im_;

    return Complex(r,i);
  }
};

int main()
{
  Complex a(2,1);
  Complex b(3,2);
  Complex c = a+b;
  b = c.operator+(a); //Ok
  c.print();

  return 0;
}
