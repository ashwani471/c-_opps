#include<iostream>
#include<cstring>
using namespace std;
 int main(){
    //  char A[]={'x','y','z','\0'};
    //  cout<<A<<endl;
    
    // char c[]="hello world";
    // cout<<c<<endl;
    // int count=0;
    //  for(int i=0;c[i]!='\0';i++){
    //   count++;
    //  }
    //  cout<<count<<endl;
    char str[100];
    cin.getline(str,100,'$');
    cout<<str;

     return 0;
 }