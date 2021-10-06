#include<iostream>
using namespace std;

//brute force approach
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_sum=INT8_MIN;
    for(int i=0;i<n;i++){
     for(int j=i;j<n;j++){
         int sum=0;
         for(int k=i;k<n;k++){
             sum=sum+arr[k];
         }
         max_sum=max(max_sum,sum);
     }
    }
    cout<<max_sum<<endl;
    return 0;
}