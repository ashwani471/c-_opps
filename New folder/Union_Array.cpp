#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    // int n,m;
    // int k=0;
    // cin>>m>>n;
    // int *arr=new int[n];
    // int *arr1=new int[m];
    // int *output=new int[m+n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int j=0;j<m;j++){
    //     cin>>arr1[j];
    // }
    // if(m>n){
    //     for(int i=0;i<n;i++){
    //         for(int j=0;i<m;j++){
    //            if(arr[i]==arr[j]){
    //            output[k]=arr[i];
    //            k++;
    //            arr[i]=INT16_MIN;
    //            arr[j]=INT16_MIN;    
    //            }
    //         }
    //     }
    //     for(int l=k;l<m+n;l++){
    //         for(int i=0;i<n;i++){
    //             if(arr[i]!=INT16_MIN){
    //                 output[l]=arr[i];
    //             }
    //         }
    //     }
    // }else{
    //     for(int i=0;i<m;i++){
    //         for(int j=0;i<n;j++){
    //            if(arr[i]==arr[j]){
    //            output[k]=arr[i];
    //            k++;
    //            arr[i]=INT16_MIN;
    //            arr[j]=INT16_MIN;    
    //            }
    //         }
    //     }
    //     for(int l=k;l<m+n;l++){
    //         for(int i=0;i<m;i++){
    //             if(arr[i]!=INT16_MIN){
    //                 output[l]=arr[i];
    //             }
    //         }
    //     }
    // }
    // cout<< output<<endl;
    int n,m;
    cin>>n>>m;
    unordered_map<int ,int> um;
    int *arr=new int[n];
    int *arr1=new int[m];

    for(int i=0;i<n;i++){
        cin>>arr[i];
      um[arr[i]]++;
    }
    for(int j=0;j<m;j++){
        cin>>arr1[j];
        um[arr1[j]++];
    }
    cout<<um.size();
}