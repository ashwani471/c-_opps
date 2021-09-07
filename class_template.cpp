#include<iostream>
using namespace std;

template <class X>
 class ArrayList{
   private:
      struct controlBlock
      {
          int capacity;
          X *arr_ptr;
      };
      controlBlock *s;
    public:
      ArrayList(int Capacity){
          s=new controlBlock;
          s->capacity=Capacity;
          s->arr_ptr=new X[s->capacity];
      }
      void addElem(int index , X data){
          if(index>=0&&index<=s->capacity){
              s->arr_ptr[index]=data;
          }
          else{
              cout<<"index not valid "<<endl;
          }
      }
      void viewElem(int index, X &data){
          if(index>=0&&index<=s->capacity){
              data=s->arr_ptr[index];
          }
          else{
              cout<<"index not valid"<<endl;
          }
      }
      void viewList(){
          int i;
          for(i=0;i<s->capacity;i++){
              cout<<" "<<s->arr_ptr[i];
          }
      }
};

int main(){
ArrayList <float> A(4);
int data;
A.addElem(0,3.2);
A.addElem(1,6.4);
A.addElem(3,1.6);
A.viewList();

}