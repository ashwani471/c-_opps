#include<iostream>
using namespace  std;


class car{
    private:
      int a;
    public:
      virtual  void shiftgear(){
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
car *c,o1;
sportsCar o2;    
c=&o2;                   //here we see that the early binding is happen so now we have to make it late binding because we uses the pointor. 
                         //in pointor we see that the memory is locator at run time .but here we want that the memory is located the pointor on the the 
                         //compile time . due to that we uses the virtual function.
c->shiftgear();
}