#include<iostream>
using namespace std;

void findduplicate(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
            }
        }
    }
    int mid=(n-1)/2;
    int *output=new int[mid];
    int k=0;
    int i=0;
    while(i<n){
        if(arr[i]!=arr[i+1]){
            i++;
        }else{
            output[k]=arr[i];
            i=i+2;
            k++;
        }
        cout<<output<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findduplicate(arr,n);
}