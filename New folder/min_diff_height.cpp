#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int ans=arr[n-1]-arr[0];
    sort(arr,arr+n);
    int smallest=arr[0]+k;
    int largest=arr[n-1]-k;
    int mi,ma;
    for(int i=0;i<n-1;i++){
        mi=min(smallest,arr[i+1]-k);
        ma=max(largest,arr[i]+k);
        if(mi>0){
            continue;
        }
        ans=max(ans,ma-mi);
    }
    cout<<ans;
}