#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int max_sum=0;
    int count=0;
    int i=0;
    int st=0,maxSt=0;
    while(1){
    if(arr[i] == ' ' || arr[i]=='\0'){
     if(count>max_sum){
         max_sum=count;
         maxSt=st;
     }
     count=0;
     st=i+1;
    }else{
    count++;
    }
    if(arr[i]=='\0'){
        break;
    }
    i++;
    }
    cout<<max_sum<<endl;
    for(int i=0;i<max_sum;i++){
        cout<<arr[i+maxSt];
    }
}





















