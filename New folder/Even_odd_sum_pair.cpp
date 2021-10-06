#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=n-1;
    int oddSum=0;
    int EvenSum=0;
    int count=0;
    int l=0;
   int output[k];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j){
                j++;
            }
         output[l]=a[j];
         l++;
        }
        int s=0;
        int p=1;
        while (s<k)
        {
            oddSum+=output[p];
           EvenSum+= output[s];
           s+=2;
           p+=2;
        }
        if(oddSum==EvenSum){
            count++;
        }        
        cout<<count<<endl;
    }
    cout<<count<<endl;
}