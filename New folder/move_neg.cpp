#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    int k=-1;
    int pivot=0;
    for(int j=0;j<n;j++){
        if(arr[j]<pivot){
            k++;
          int temp=arr[j];
          arr[j]=arr[k];
          arr[k]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}