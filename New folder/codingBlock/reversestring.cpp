#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>

// char reverse(char *ch){
//     int i=0;
//     int j=strlen(ch)-1;
//     while(i<j){
//         swap(ch[i],ch[j]);
//     }
// }

void reverse(char *str){
    int i=0;
    int j=strlen(str)-1;
    for(;i<j;i++,j--){
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;
}
int main(){
    int n;cin>>n;
    char str1[n];
    cin>>str1;
     reverse(str1);
    // cout<<reverse(ch);
    // reverse(str,str+strlen(str));
}