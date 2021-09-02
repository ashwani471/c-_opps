#include<iostream>
using namespace std;

class complex{
  private:
    int a,b;
  public:
    void setdata(int x ,int y){
     a=x;
     b=y;
    }
    void showdata(){
      cout<<"a is "<<a<<"b is "<<b<<endl;
    }
    friend ostream& operator<<(ostream&,complex);
    friend istream& operator>>(istream&, complex&);
};

ostream& operator<<(ostream &dout,complex c){
  cout<<"a is "<<c.a<<"b is"<<c.b<<endl;
  return(dout);
}
istream& operator>>(istream &din, complex &c){
  cin>>c.a>>c.b;
  return(din);
}
// class B;
// class A{
//     private:
//       int a;
//       public:
//         void setData(int x){
//           a=x;
//         }

//         friend void fun(A,B);
// };

// class B{
//      private:
//       int b;
//       public:
//         void setData(int y){
//           b=y;
//         }
//         friend void fun(A,B);
// };

// class complex{
//   private:
//   int a ,b;
//   public:
//     void setdata(int x, int y){
//       a=x;
//       b=y;
//     }

//     void show_data(){
//         cout<<"a is"<<a<<endl;
//         cout<<"b is "<<b<<endl;
//     }
//     friend void fun(complex);

// };

// // void fun(complex c){
// //   cout<<"the sum is"<<c.a+c.b<<endl;
// // }

// void fun(A o1,B o2){
//     cout<<"The sum of o1 and o2 is "<<o1.a+o2.b<<endl;
// }


///yhis is concept to define that if u want to make all func of class A to be friend of class B than u have to do like this
class A{
  private:
    int a;
  public:
    void fun(){
      cout<<"fun"<<endl;
    }
    void foo(){
      cout<<"foo"<<endl;
    }
};

class B{
  ///now i want to excess the fun of class A as a friend class in class B
  // friend void A::fun();
  // friend void A::foo();

  ///and if u want to excess all member fun of class A than 
  friend class A;
};


int main(){
// complex c1,c2,c3;
complex c1;
cout<<"enter a complex no"<<endl;
cin>>c1;               ///cin.operator>>(c1);
cout<<"you entered: "<<c1<<endl;///operaoor<<(cout,c1);

    // c1.setdata(3,4);
    // // fun(c1);
    // A a;
    // a.setData(3);
    // B b;
    // b.setData(4);
    // fun(a,b);
    
}