#include<iostream>
using namespace std;

void sort_0_1(int *arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    for(int j=0;j<count;j++){
        arr[j]=0;
    }
    for(int k=count;k<n;k++){
        arr[k]=1;
    }
}

int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort_0_1(arr,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}