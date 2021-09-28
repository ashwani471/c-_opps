#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int val;
    cin>>val;
    int start=0;
    int end=n-1;
   while(start<=end){
       int mid=(start+end)/2;
        if(a[mid]==val){
            cout<<mid;
        }else
        if(a[mid]>val){
          end=mid-1;
        }
        else{
             start=mid+1;
        }
    }
    return -1;
}