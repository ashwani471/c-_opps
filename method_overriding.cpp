#include<iostream>
using namespace std;

class car{
    private:
      int a;
    public:
      void shiftgear(){
          cout<<"car class gear shifting"<<endl;
      }
      void f1(){}
};

class sportsCar:public car{
    public:
    void shiftgear(){                    //method overiding
        cout<<"sportacar class gear shifting"<<endl;
    }
    void f1(int x){}  //method hiding
};

int main(){

 
 sportsCar sc , sc2;
 sc.shiftgear();
//   c.f1();  
//   sc2.f1();  ///error
  sc2.f1(4);
}