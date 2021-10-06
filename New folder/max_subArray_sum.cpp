#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_sum=-19999;
    int sum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
        }
        max_sum=max(sum,max_sum);
    }
    cout<<max_sum<<endl;
}