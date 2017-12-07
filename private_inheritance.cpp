#include<iostream>
using namespace std;

class Engine{
public:
  Engine(int numCylinders):cylinders(numCylinders){
    cout << "Engine constructed " << numCylinders <<endl;
  }

  void start(){
    cout << "Engine started " << endl;
  }

protected:
  int cylinders;
};

class Car : private Engine{
public:
  Car():Engine(8){
    cout << "car constructed " << endl;
    start();
    cylinders = 10;
    cout << "Changing cylinders :" << cylinders << endl;
  }

  void check()
  {
    cylinders = 12;
    cout << "Changing cylinders :" << cylinders << endl;

  }
  using Engine::start;
  using Engine::cylinders;
};

int main(){
  Car c;
  c.start();
  c.check();
  cout << c.cylinders << endl;

  // int i;
  // double *p = new double;
  // *p = 2.0;
  // i = (int)p;
  // cout << i << endl;
  return 0;
}
