#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int *arr=new int[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
const int N=1e6+2;
int *check=new int[N];
for(int i=0;i<N;i++){
    check[i]=0;
}
for(int i=0;i<n;i++){
    if(arr[i]>0){
    check[arr[i]]++;
    }
}
for(int j=0;j<N;j++){
    if(check[j]>1){
     cout<<j<<" "<<check[j]<<endl;
    }
}
}