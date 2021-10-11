#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a1=new int[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    int m;
    cin>>m;
    int *a2=new int[m];
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }

    int size=n+m;

    int op[size];
    int count=0;

    for(int i=0;i<size;i++){
        op[i]=a1[i];
        count++;
    }
    for(int j=count+1;j<size;j++){
        op[j]=a2[j];
    }
    
}