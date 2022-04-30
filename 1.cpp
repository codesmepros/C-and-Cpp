//c++
//basics
#include<iostream>
using namespace std;
class Car{
  public :
  void honk()
  {
    cout << "Hello, World" << endl;
  }
  void ask()
  {
    cout << "UR FAV CAR" << endl;
  }
};

int main ()
{
  Car ford ;
  ford.honk();
  ford.ask();
