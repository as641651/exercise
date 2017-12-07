#include<iostream>

class Complex{



public:
    float re;
    float im;

  Complex(float r, float i):re(r),im(i)
  {}

  Complex &operator=(const Complex &c)
  {
    std::cout << "Assignment done" << '\n';
    re = c.re;
    im = c.im;
    return *this;
  }

  ~Complex(){
  }

  void set(float r, float i)
  {
    re = r;
    im = i;
  }
  void print()
  {
    std::cout << re << im << std::endl;
  }


};


int main(){


  Complex c1 = {5,1} ;
  Complex c2 = {23,12} ;

  c1.print();
  c2.print();
  std::cout << &c1 << '\t' << &c2 << '\n';
  c1 = c2; //REturns ref of c1 to c1
  std::cout << &c1 << '\t' << &c2 << '\n';
  c1.set(9,9);
  c1.print();
  c2.print();




  return 0;
}
