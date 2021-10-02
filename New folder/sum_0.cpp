#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<true;
        }
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j]==0){
                cout<< true;
            }
            for(int k=2;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<<true;
                }
            }
        }
    }
    cout<<false<<endl;

}