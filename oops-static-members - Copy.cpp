#include <iostream>
using namespace std;

//static members are the members that are shred by all objects of that class;
//we have declare staic members using (::)operator if we want to use it;

class bank{
    public:
      static int a;
};

int bank::a=1;//initialize a static member


class bank2{
    private:
      static int id;
    
    public:
      void display(){
          cout<<id<<endl;
      }
};

int bank2::id=2;//initialize a static member;



int main(){
    cout<<bank::a<<endl;
    
    bank2 b2;//we have to create b2 object to access display fun ..
    b2.display();
    
}



//OUTPUT:
//1
//2
