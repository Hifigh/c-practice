#include <iostream>
using namespace std;

int main(){
    // pointer ----> data tyoe whicw holds the address of other data types

    int a=3;
    int*b = &a;
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;
    cout<<"The value of a is"<<*b<<endl;

    // &----> adress of operetor
    // pointer to pointer
    int**c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<c<<endl;
    cout<<"The value at address (value_at(c) is) "<<**c<<endl;
    // *----> (value of operator) dereference operetor
    return 0;
}