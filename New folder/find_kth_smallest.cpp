#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val =0;
    for(int i=0;i<n;i++){
        if(arr[i]<n){
            val=arr[i];
        }
    }
    int val_ans=0;
    val_ans=arr[val];
    cout<<val_ans<<endl;
}