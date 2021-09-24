#include<iostream>
using namespace std;
#include<vector>

void printvec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // pair<int,string> p;
    // p={2,"abcd"};
    // cout<<p.first<<" "<<p.second<<endl;
    // pair<int,string> &p1=p;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // pair<int,int> p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={3,4};
    // p_array[2]={5,6};
    // for(int i=0;i<3;i++){
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<" "<<endl;
    // }
    // pair<int,string> p3;
    // cout<<"enter p3.first: "<<endl;
    // cin>>p3.first;
    // cout<<"enter p3.second: "<<endl;
    // cin>>p3.second;
    // cout<<p3.first<<" "<<p3.second<<endl;
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    vector<int> v(10,3);
    v.push_back(7);
    v.pop_back();
    vector<int> &v2=v;
    vector<int> v3=v;
    v2.push_back(7);
    v3.push_back(11);
    printvec(v);
    printvec(v2);
    printvec(v3);

}