#include<iostream>
using namespace std;

int nraisedPowerp(int n,int p){
if(p==0){
    return 1;
}
int lastPower=nraisedPowerp(n,p-1);
return n*lastPower;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<nraisedPowerp(n,p)<<endl;
}