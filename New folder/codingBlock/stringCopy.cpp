#include<iostream>
#include<cstring>
using namespace std;

void stringCopy(char *ch1, char *ch2){
    int i=0;
    int n=strlen(ch1);
    int m=strlen(ch2);
    for(;i<ch2[i]!='\0';i++){
     ch1[i]=ch2[i];
    }
    cout<<ch1<<endl<<ch2<<endl;
}

int main(){
    int n;
    cin>>n;
    char ch1[n];
    cin>>ch1;
    int m;
    cin>>m;
    char ch2[m];
    cin>>ch2;
    stringCopy(ch1,ch2);
}