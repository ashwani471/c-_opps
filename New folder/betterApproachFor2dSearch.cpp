#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    int r=0,c=m-1;
    int targ;
    cin>>targ;
     bool found=false;
    while(r<n and c<m){
     if(mat[r][c]==targ){
         found=true;
     }
     if(mat[r][c]>targ){
         c--;
     }else{
         r++;
     }
    }
     if(found){
         cout<<"Element Found"<<endl;
     }else{
         cout<<"Element not found"<<endl;
     }
}