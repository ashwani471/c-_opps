#include<iostream>
using namespace std;

int firstOccrence(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOccrence(arr,n,i+1,key);
}

int lastOccurence(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastOccurence(arr,n-1,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<firstOccrence(arr,n,0,key)<<endl;
    cout<<lastOccurence(arr,n,0,key);
}