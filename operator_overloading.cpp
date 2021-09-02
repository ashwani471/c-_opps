#include<iostream>
using namespace std;

class integer{
    private:
    int a;
    public:
    void setdata(int x){
        a=x;
    }
    void showdata(){
        cout<<"x is"<<a<<endl;
    }
    integer operator++(int ){
        integer i;
        i.a=a++;
        return i;
    }
    integer operator++(){
        integer i;
        i.a=++a;
        return i;
    }
};
class complex{
    private:
    int a,b;
    public:
    void set_data(int x,int y){
        a=x;
        b=y;
    }
   void show_data(){
       cout<<a<<endl;
       cout<<b<<endl;
   }
   complex operator+(complex c){
       complex temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return temp;
   }
   complex operator-(){
       complex temp2;
       temp2.a=-a;
       temp2.b=-b;
       return temp2;
   }
   

};

int main(){
  complex c1,c2,c3,c4;
  integer c5,c6;
  c1.set_data(3,4);
  c2.set_data(5,6);
  c3=c1+c2;
  c3.show_data();
  c4=-c1;
  c4.show_data();
  c5.setdata(3);
  c6=++c5;
  c5.showdata();
  c6.showdata();
}