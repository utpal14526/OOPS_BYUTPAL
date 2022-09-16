#include <iostream>
using namespace std;

class student{
    private:
      int a;
      void privatefunction(){
          cout<<"CALLED FROM PRIVATE";
      }
      
    public:
      int b;
      void setter(int a,int b){
          this->a=a;
          this->b=b;
      }
      
      void getter(){
          cout<<"The value of a and b is "<<a<<" "<<b<<endl;
      }
};


int main(){
    student s1;
    s1.setter(2,3); 
    s1.getter();
}