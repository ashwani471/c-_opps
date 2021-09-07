#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n"<<endl;
//     cin>>n;
    
//     int arr[20];
//   int output=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum;
//     cin>>sum;
//     int i=0;
//     int j=1;
//     for(;i<n;i++){
//         if(i=j){
//             j++;
//         }
//         for(;j<n;j++){
//             if(arr[i]+arr[j]==sum){
                // j++;
//               output++;  
//             }
//         }
//     }
//             cout<<output;

// }

int pairCnt(int arr[],int n, int sum){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                count++;
            }
        }
        return count;
    }
}

int main(){
    int arr[]={1,5,7,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=6;
    cout<<"count of pair of sum"<<pairCnt(arr,n,sum);
    return 0;
}