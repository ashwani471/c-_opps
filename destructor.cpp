#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    ~complex(){
     cout<<"Destructor";
    }
};

void fun(){
    complex obj;
} 

int main(){
fun();
}