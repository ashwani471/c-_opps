#include<iostream>
using namespace std;

string substrin(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string ros=s.substr(1);
    substrin(ros,ans);
    substrin(ros,ans+ch);
}

int main(){

}