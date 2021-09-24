#include<iostream>
#include<fstream>
using namespace std;

int main(){
fstream fout;
fout.open("myfile.dat");
fout<<"hello";
fout.close();
// getch();
}
