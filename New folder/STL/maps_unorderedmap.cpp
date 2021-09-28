#include<iostream>
using namespace std;
#include<map>

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr :m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
  map<int , string> m;
  m[1]="abc";
  m[5]="ght";
  m[3]="dvf";
  m.insert({4,"wgd"});

  map<int,string> :: iterator it;
  for(it=m.begin();it!=m.end();++it){
      cout<<(it->first)<<" "<<(it->second)<<endl;
  }
}