//c++
//basics
#include<iostream>
using namespace std;
string xcar ; 
class Car{
  public :
  void honk()
  {
    cout << "Hello, World" << endl;
  }
  void ask()
  {
   
    cout << "UR FAV CAR" << endl;
    cin >> xcar;
  }
};

int main ()
{
  
  Car ford ;
  ford.honk();
  ford.ask();
  
  return 0 ; 
}
