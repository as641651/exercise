#include<iostream>
using namespace std;

//Static binding - call depends on type of pointer
//dynamic binding - call depends on type of obj calling
class B{
public:
  void f()
  {
      cout << "b::f" <<endl;
  }
  virtual void g(){
    cout << "b::g" <<endl;
  }
  virtual void j(){
    cout << "b::j" <<endl;
  }
};

class D : public B{
public:
  void f()
  {
      cout << "d::f" <<endl;
  }
  virtual void g(){ //virtual keyword is optional unless we dervive a class from this
    cout << "d::g" <<endl;
  }

  using B::j; //Cant be overloaded from base class without this line

  virtual void j(int i){
    cout << "d::j" <<endl;
  }
};

int main(){

  B b;
  D d;

  b = d;
  b.g();

  B* pb = &d;
  pb->g(); //dynamic binding

  pb->f();
  B &rb = d;
  rb.g(); //dynamic binding
  rb.f();

  cout << "Overriding check ..." << endl;

  d.j();
  d.j(1);
  pb->j();
  //pb->j(1); Compilation Error
  rb.j();
  //rb.j(1); Compilation error
  return 0;
}
