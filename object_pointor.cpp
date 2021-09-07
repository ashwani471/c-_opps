#include<iostream>
using namespace std;

class Box{
    private:
      int l,b,h;
    public:
      void setData(int x,int y,int z){
          l=x;
          b=y;
          h=z;
      }
      void showData(){
          cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl;
      }
};

int main(){
  Box b;
  Box *p;  
  p=&b;
//   b.setData(2 , 3,4);
//   b.showData();
p->setData(3,4,5);
p->showData();
}