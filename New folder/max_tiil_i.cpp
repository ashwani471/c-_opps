#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mx=-19999;
for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);
}
cout<<mx;
}