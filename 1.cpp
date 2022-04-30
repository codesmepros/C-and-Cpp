//c++
//basics
#include<iostream>
using namespace std;
char xcar[100]; 
class Car{
  public :
  void honk()
  {
    cout << "Hello, World" << endl;
  }
  void ask()
  {
   
    cout << "UR FAV CAR" << endl;
    scanf("%s",xcar);
    printf("Gr8 Choice");
  }
};

int main ()
{
  
  Car ford ;
  ford.honk();
  ford.ask();
  
  return 0 ; 
}
