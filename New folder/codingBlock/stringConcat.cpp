#include<iostream>
using namespace std;
#include<cstring>

void stringConcate(char *str1,char *str2){
    int i=strlen(str1);
    int j=0;
    while(j<strlen(str2)){
        str1[i]=str2[j];
        i++;
        j++;
    }
    cout<<str1;
}

int main(){
    // string str1="hello";
    // string str2="world";
    // string full=str1+str2;
    // cout<<full;

    char str1[100]="hello";
   char str2[100]="world";
   stringConcate(str1,str2);
    

}