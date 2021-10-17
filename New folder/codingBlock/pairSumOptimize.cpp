#include<iostream>
using namespace std ;

int main(){
    int n;cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]+arr[j]==tar){
            cout<<i<<j<<endl;
        }
        else if(arr[i]+arr[j]>tar){
            j--;
        }else if(arr[i]+arr[j]<tar){
            i++;
        }
    }
}