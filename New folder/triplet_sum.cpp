#include<iostream>
using namespace std;

int  triplet_sum(int *arr , int n, int x){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++)
            if(arr[i]+arr[j]+arr[k]==x){
             count++;
            }
        }
    }
     cout<<count<<endl;
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
    cout<<triplet_sum(arr,n,val)<<endl;
}