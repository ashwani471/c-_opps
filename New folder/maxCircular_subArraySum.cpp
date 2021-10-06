#include<iostream>
using namespace std;

int kadane(int arr[],int n){
    int curr_sum=0;
    int max_sum=-19999;
    for(int i=1;i<n;i++){
    //  curr_sum=arr[i];
     curr_sum=curr_sum+arr[i];
     if(curr_sum<0){
         curr_sum=0;
     }
     max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapSum;
    int nonwrapSum;
    nonwrapSum=kadane(arr,n);
     int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum=totalSum+arr[i];
        arr[i]=-arr[i];
    }

    wrapSum=totalSum+kadane(arr,n); 
    cout<<max(wrapSum,nonwrapSum)<<endl;
}