#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
//call by reference using pointer
void swappointer(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//swap reference variables direct
int & swapreferenceVar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}

int main(){
    int a=5;
    int b=4;
    cout<<"value of a is"<<" "<<a<<" "<<"value of b is"<<b<<endl;
    // swap(a,b);// this can't be possible
    // swappointer(&a,&b); //swap by call by reference using pointer
    // swapreferenceVar(a,b);
        swapreferenceVar(a,b)=766;
    cout<<"value of a is"<<" "<<a<<" "<<"value of b is"<<b<<endl;

}