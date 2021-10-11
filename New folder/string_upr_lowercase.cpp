#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="ahedyFAgATg";

    // cout<<'a'-'A'<<endl;

    // convert in lowercase

    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),:: toupper);
     cout<<s<<endl;

    // convert on uppercase
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;
}