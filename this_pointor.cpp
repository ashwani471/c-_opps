#include<iostream>
using namespace std;

class Box{
    private:
      int l,b,h;
    public:
      void setDimension(int l,int b,int h){
          this->l=l;
          this->b=b;
          this->h=h;
      }
      void showDimension(){
          cout<<"l="<<l<<" b="<<b<<" h="<<h<<endl;
      }
};

int main(){
  Box b;
  b.setDimension(3,4,5);
  b.showDimension();
}