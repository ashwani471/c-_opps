#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int *arr=new int[n];
  int temp;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  temp=arr[n-1];
  for(int i=n-1;i>0;i--){
   arr[i]=arr[i-1];
  }
  arr[0]=temp;
  for(int j=0;j<n;j++){
      cout<<arr[j]<<" ";
  }
  cout<<endl;
}