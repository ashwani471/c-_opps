#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max_sum=-1999;
    int curr_sum=0;
    for(int i=0;i<n;i++){
        curr_sum=curr_sum+arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
      max_sum=max(curr_sum,max_sum);
    }
    cout<<max_sum<<endl;
}