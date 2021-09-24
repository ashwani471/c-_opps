#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    int count0=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
    }
    // for(int j=0;j<count0;j++){
    //     arr[j]=0;
    // }
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count1++;
        }
    }
     for(int j=0;j<count0;j++){
        arr[j]=0;
    }
    for(int k=count0;k<count1+count1;k++){
        arr[k]=1;
    }
    for(int m=count0+count1;m<n;m++){
        arr[m]=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}