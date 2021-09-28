#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=k+1;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}