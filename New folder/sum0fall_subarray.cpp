#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int output=0;
    for(int i=0;i<n;i++){
        output=0;
     for(int j=i;j<n;j++){
         output=output+arr[j];
         cout<<output<<endl;
     }
    }
}