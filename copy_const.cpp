#include<iostream>

class Complex{



public:
    float re;
    float im;
    int *ip;

  Complex(float r, float i, int *p):re(r),im(i),ip(p)
  {}



  ~Complex(){
    free(ip);
  }

  void set(float r, float i)
  {
    re = r;
    im = i;
  }
  void print()
  {
    std::cout << re << im << *ip << std::endl;
  }


};

void print_ip(Complex c)
{
  std::cout << "I will crash" <<std::endl;
}

int main(){

  //int *p  = new int(7);
  int *p  = (int*)malloc(sizeof(int));
  *p = 7;
  Complex c = {5,1,p} ;
  //Complex c2 = c; //Again Free copy const error. Frees ip twice at destruction
  //c2.print();
  //c2.set(1,2);
  print_ip(c); //Free copy constructor does shallow copy. So when the scope of obj in print_ip ends, it deletes memory of the called
  c.print();
  return 0;
}
