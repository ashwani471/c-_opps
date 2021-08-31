#include<iostream>
using namespace std;
#include<string>

struct book{
    private:
    int bookid;
// cout<<"bookid is "<<bprice<endl;

   char tittle[20];
   float price;
   
  public:  
   void input(){
       cout<<"enter bookid,tittle,price"<<endl;
       cin>>bookid>>tittle>>price;
       if(bookid<0){
           bookid=-bookid;
       }
   }

   void display(){
       cout<<"bookid is "<<bookid<<endl;
       cout<<"tittle is "<<tittle<<endl;
       cout<<"price is "<<price<<endl;
   }

}b3;

// book input(){
//     book b;
//     cout<<"Enter bookid,tittle,price"<<endl;
//     cin>>b.bookid>>b.tittle>>b.price;
//     return b;
// }
// void display(book b){
//     cout<<b.bookid<<" "<<b.tittle<<" "<<b.price<<endl;
// } 

int main(){
//  book b1={100,"c++ by codelover",400.4};
//  book b2;
//  b2.bookid=101;
//  strcpy(b2.tittle,"c++ made easy");
//  b2.price=450.8;

//  b3=b2;
book b1;
// b1=input();
// display(b1);
b1.input();
// b1.bookid=-100; 
b1.display();

}