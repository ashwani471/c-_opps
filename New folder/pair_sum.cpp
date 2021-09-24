#include<iostream>
using namespace std;

int pair_sum(int *arr ,int n ,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
             count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cin>>val;
    cout<<pair_sum(arr,n,val);
}