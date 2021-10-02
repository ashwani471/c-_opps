#include<iostream>
using namespace std;

class complex {

    private:
      int a,b;
    public:
      complex(){
          cout<<"hello constructor"<<endl;
      }
      complex(int x,int y){        ///this is called constructor overloading or parametrized constructor
       a=x;
       b=y;
      }
      complex(){}                  ///this is called default constructor

      complex(complex &c){  ///copy constructor
        a=c.a;
        b=c.b;
      }
};  

void main(){
   complex c1,c2(3,4) ,c3;
  //  complex c4(c2);
}