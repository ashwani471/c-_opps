#include<iostream>
using namespace std;
#include<cstring>

bool checkAnagram(char *str1,char *str2,int freq[]){
 int n=strlen(str1);
 int m=strlen(str2);
 if(n!=m){
     return false;
 }
 else {
     for(int i=0;i<str1[i]!='\0';i++){
     int idx=str1[i]-97;
     freq[idx]++;
     }

     for(int j=0;j<str2[j]!='\0';j++){
         int idx2=str2[j]-97;
         freq[idx2]--;
     }
//    for(int k=0;k<26;k++){
//        if(freq[k]!=0&& freq[k]<0){
//            return false;

//        }else{
//            return true;
//        }
//    }
    int k=0;
    while(k<26){
        if(freq[k]!=0){
            return false;
            break;
        }
        k++;
        return true;
    }
 }
}

int main(){
    int n;cin>>n;
    char str1[n];
    cin>>str1;
    int m;cin>>m;
    char str2[m];
    cin>>str2;
    int freq[26]={0};
    bool Ans=checkAnagram(str1,str2,freq);
    if(Ans){
        cout<<"string is anagram"<<endl;
    }else {
        cout<<"string is not anagram"<<endl;
    }
}


// #include<iostream>
// using namespace std;

// int main(){
//     int idx='a';
//     cout<<idx;
// }