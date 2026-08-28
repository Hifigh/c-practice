#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // constants in c++
    // const int a = 34;
    // cout<<"The value of a was:" <<a<<endl;
    // a=45; // u will get a error because a is a contt
    // cout<<"The  value of a is now:"<<a<<endl;

    // Manipulators in c++
    // int a =3, b=78,c=1233;
    // cout<<"The value of a is:"<<a<<endl;
    // cout<<"The value of b is:"<<b<<endl;
    // cout<<"The value of c is:"<<c<<endl;
    
    // cout<<"The value of a with setw is:"<<setw(4)<<a<<endl;
    // cout<<"The value of b with setw is:"<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;
    
    //operator precedence
    int a=3, b=4;
    int c=(a*5)+b-45+87;
    cout<<c;
    return 0;

}