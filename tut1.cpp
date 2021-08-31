#include<iostream>
using namespace std;

int main(){
    // cout<<"hello world";
    // int age;
    // cout<<"enter your age"<<endl;
    // cin>>age;
    // switch(age)   
    // {
    // case 18:
    //   cout<<"you are 18"<<endl;
    //     /* code */
    //     break;

    // case 22:

    //     cout<<"you are 22"<<endl;
    //     break;

    //  case 2:

    //     cout<<"you are 2"<<endl;
    //     break;
    
    // default:

    //  cout<<"No special case"<<endl; 
    //     break;

    // }
    
    //     cout<<"Done with switch case";

    int a=3;
    int *b= &a;
    //& ---->(Address of) operator
    cout<<"The address of a is"<<&a<<endl;
         cout<<"The address of a is"<<b<<endl;
   //* --->(value at) Dereference operator
       cout<<"The Value at address b is"<<*b<<endl;


    return 0;
}