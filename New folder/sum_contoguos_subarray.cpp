#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int max=INT16_MIN;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum=sum+arr[k];
    //         }
    //         if(sum>max){
    //             max=sum;
            // }
        // }
    // }
    // cout<<max<<endl;
    int max_TH=0;
    for(int i=0;i<n;i++){
    max_TH=max_TH+arr[i];
        if(max_TH>max){
            max=max_TH;
        }
        if(max_TH<0){
            max_TH=0;
        }
        // max_TH=max_TH+arr[i];
    }
    cout<<max;
}