#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    int prevFact=fact(n-1);
    return prevFact*n;
}

int main(){
    int n;cin>>n;
    cout<<fact(n)<<endl;
}