#include<iostream>
using namespace std;

class person{
    public:
      virtual void fun()=0;   ///pure virtual function
       void f1(){
           cout<<"paerson f1";
       }

};

class student:public person{
    public:
    void fun(){
     cout<<"student fun"<<endl;
    }
};

int main(){
 student s;
 s.fun();
}