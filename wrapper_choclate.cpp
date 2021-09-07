#include<iostream>
using namespace std;

int main(){
    int Rs;
    cout<<"Enter how much money u have"<<endl;
    cin>>Rs;
    int choc;
    int Wrapper;
    if(Rs>0){
        Wrapper=Rs/3;
    }
    if(Wrapper>=3){
        Wrapper=Wrapper/3;
    }
    choc=Rs+Wrapper;
    cout<<choc<<endl;
}