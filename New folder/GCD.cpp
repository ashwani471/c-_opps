#include<iostream>
using namespace std;

int GCD(int a,int b){
   int c1;
   while(a%b!=0)
   if(a>b){
        c1=a%b;
       a=b;
       b=c1;
   }else{
       c1=b%a;
       b=a;
       a=c1;
   }
   if(a>b){
       return b;
   }else{
       return a;
   }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
}