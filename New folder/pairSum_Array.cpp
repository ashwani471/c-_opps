#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    int low=0;
    int high=n-1;
   while(low<high){
       sum=arr[low]+arr[high];
      if(sum<k){
          low++;
      }else if(sum>k){
          high--;
      }else if(sum==k){
          cout<<low<<" "<<high<<endl;
          break;
      }
      else{
          cout<<"false"<<endl; 
      }
   }
}

//here we see that the pair sum found in O(n)
//first sort the array if it is in unsorted manner;