#include<iostream>
using namespace std;
#include<string>

int main(){
    string s="aagskdkggbdmhghd";
    int cnt[26];
    for(int i=0;i<26;i++){
        cnt[i]=0;
    }
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'a']++;
    }
    char ans='a';
    int maxf=0;
    for(int i=0;i<26;i++){
        if(cnt[i]>maxf){
            maxf=cnt[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans;
}
