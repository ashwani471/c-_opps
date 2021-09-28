#include<iostream>
using namespace std;
#include<vector>

int main(){
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // vector<int> :: iterator it=v.begin();
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<(*it)<<endl;
    // }
    // for(int & value : v){
    //     cout<<value<<" ";
    // }


/// use iterator in case of pair

vector<pair<int,int>> v_pair={{1,2},{3,4},{5,6}};
// vector<pair<int,int>> :: iterator it;
// for(it=v_pair.begin();it!=v_pair.end();++it){
//     cout<<(it->first)<<" "<<(it->second)<<endl;
// }

// now the process is so lengthy though now introduce range bits in c++11.
// for(pair<int ,int> &value : v_pair){
//     cout<<value.first<<" "<<value.second<<endl;
// }

/// after c++11 the auto keyword is launch here we use it like that
   for(auto &value : v_pair){
       cout<<value.first<<" "<<value.second<<endl;
   }

}