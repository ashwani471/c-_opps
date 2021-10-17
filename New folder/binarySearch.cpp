#include<iostream>
using namespace std;

int binarySearch(int start,int end,int k,int *arr)
{
    int mid=start+(end-start)/2;
    while(start<=end){
     if(arr[mid]==k){
         return mid;
     }else
     if(arr[mid]>k){
        
        end=mid-1;
     }
     else if(arr[mid]<k){
         start=mid+1;
     }
}
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<binarySearch(0,n-1,k,arr);
}