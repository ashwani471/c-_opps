#include<iostream>
using namespace std;

void reverseArray(int *arr, int n){
    for(int i=0,j=n-1;i<n&&j>i;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main(){
    int n ;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    // cout<endl;
}