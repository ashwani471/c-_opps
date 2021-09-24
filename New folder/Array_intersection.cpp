#include<iostream>
using namespace std;
#include<climits>

void ArrayIntersection(int *input1 ,int size1,int *input2 , int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(input1[i]==input2[j]){
            cout<<input1[i]<<endl;
            input2[j]==INT_MIN;
            break;
            }
        }
    }
}

int main(){
    int size1;
    cin>>size1;
    int *arr1=new int[size1];
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    int size2;
    cin>>size2;
    int *arr2=new int[size2];
    for(int j=0;j<size2;j++){
        cin>>arr2[j];
    }
    ArrayIntersection(arr1,size1,arr2,size2);
}