#include<iostream>
using namespace std;
#include<cstring>

int length(char *str){
    int count=0;
    int i=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
}

int main(){
    // char str1[100];
    // char str2[100];
    // char str3[100];
    // cin>>str1>>str2>>str3;
    // int a=length(str1);
    // int b=length(str2);
    // int c=length(str3);
    // int max_count=INT8_MIN;
    int n;
    cin>>n;
    cin.ignore();
    char maxString[100];
    char temp[100];
    int maxlen=INT8_MIN;
    int i=0;
    while(i<n){
        cin.getline(temp,100);
        if(int(strlen(temp))>maxlen)
       {
           maxlen=strlen(temp);
           strcpy(maxString,temp);
       }
       i++;
    }
    cout<<maxlen<< " "<<maxString<<endl;

}
