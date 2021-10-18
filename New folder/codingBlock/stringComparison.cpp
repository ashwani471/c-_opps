#include<iostream>
using namespace std;
#include<cstring>


int stringCompare(char *str1,char *str2){
    int i=0;
    int j=0;
    int m=strlen(str1);
    int n=strlen(str2);
    while(i<m&&j<n){
        if(str1[i]==str2[j]){
            return 0;
        }else if(str1[i]>str2[j]){
            return 1;
        }else{
            return -1;
        }
        
    }
    if(i==m&&j==n){
        return 0;
    }else if(i<m){
        return -1;
    }else return 1;
}

int compare(char *str1,char* str2,int n)
{
    for(int i=0;i<n;i++){
        if(str1[i]==str2[i]) continue;
        else if(str1[i]>str2[i]) return 1;
        else return -1;
    }
}
int main(){
    char str1[]="hello";
    char str2[]="aello";

    int n=sizeof(str1)/sizeof(char);
    cout<<compare(str1,str2,n)<<endl;
}
