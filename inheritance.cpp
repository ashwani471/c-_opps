#include<iostream>
using namespace std;

class Array{
    private:
      int a[10];
    public:
      void insert(int index, int val){
       a[index]=val;
      }
};

class Stack:private Array{
  private:
    int top;
  public:
    void push(int value){
      insert(top,value);
    }
};

int main(){
    Array a1;
    Stack s1;
    s1.push(34);
    // s1.insert(2,56);
}