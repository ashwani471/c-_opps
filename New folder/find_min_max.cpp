#include<iostream>
using namespace std;
    
    //method 1
// int main(){
//    int n;
//    cin>>n;
//    int *arr=new int[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//     int max=0;
//     int min=0;
//     if(n==1){
//         max=arr[0];
//         min=arr[0];
//     }
//     else {
//         if(arr[0]>arr[1]){
//             max=arr[0];
//             min=arr[1];
//         }else{
//             min=arr[0];
//             max=arr[1];
//         }
//     }
//     for(int i=2;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         else{
//         if(arr[i]<min){
//             min=arr[i];
//         }
//         }
//     }
//     cout<<"max no is"<<" "<<max<<endl;
//     cout<<"min no is"<<" "<<min<<endl;
// }

//method 2

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int min=0;
    if(n%2==0){
        if(n==1){
            max=arr[0];
            min=arr[0];
        }
        else{
            if(arr[0]>arr[1]){
                max=arr[0];
                min=arr[1];
            }else{
                min=arr[0];
                max=arr[1];
            }
        }
        for(int i=2;i<n;i=i+2){
            if(arr[i]<arr[i+1]){
             if(arr[i+1]>max){
                 max=arr[i+1];
             }else{
                 if(arr[i+1]<min){
                     min=arr[i+1];
                 }
             }
            }else{
                if(arr[i]>max){
                    max=arr[i];
                }else{
                    if(arr[i]<min){
                        min=arr[i];
                    }
                }
            }
        }
    }
    for(int i=2;i<n-1;i=i+2){
         if(arr[i]<arr[i+1]){
             if(arr[i+1]>max){
                 max=arr[i+1];
             }else{
                 if(arr[i+1]<min){
                     min=arr[i+1];
                 }
             }
            }else{
                if(arr[i]>max){
                    max=arr[i];
                }else{
                    if(arr[i]<min){
                        min=arr[i];
                    }
                }
            }

    }
    if(arr[n-1]>max){
        max=arr[n-1];
    }else{
        if(arr[n-1]<min){
            min=arr[n-1];
        }
    }
    cout<<"max no is "<<max<<endl;
    cout<<"min no is "<<min<<endl;
    
}
