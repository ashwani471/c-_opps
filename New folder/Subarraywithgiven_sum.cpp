#include<iostream>
using namespace std;

int main(){
    int n,s;
    cout<<"Enter n,s:"<<endl;
    cin>>n>>s;
     
    int arr[n];

    for(int i;i<n;i++){
        cin>>arr[i];
    }
    // int s;
    // cout<<"enter s"<<endl;
    // cin>>s;
   
    int output=0;
    int max_len=INT8_MIN;
    for(int i=0;i<n;i++){
      output=0;
      for(int j=i;j<n;j++){
          output=output+arr[j];
          int len;
          if(output==s){
           len=(j-i+1);
           max_len=max(len,max_len);
          cout<<i<<j<<max_len<<endl;
          }
          break;
      }
    }
    cout<<"no subarray found"<<endl;
    return 0;
}