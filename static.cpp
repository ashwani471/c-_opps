#include<iostream>
using namespace std;

class account{
 
   private:
    int balance;    //instance variable
    static float roi;   //class variable
  public:
    void set_balance(int b){
        balance =b;
    }
    static void set_roi(float r){
        roi=r;
    }
}; 

float account:: roi=3.5f;

void main(){
 account a1;
 a1.set_balance(500);
a1.set_roi(4.5f);
account::set_roi(4.5f);
}