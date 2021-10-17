#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t){
                cout<<i<<j<<endl;
            }
        }
    }
    cout<<"-1"<<endl;
}