#include<iostream>
using namespace std;

int main(){
//     char ch[100];
//     cin>>ch;
//     cout<<ch;

//check palindrome

    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check =false;
            break;
        }
    }
    if(check==true){
        cout<<"palindrome "<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }
}