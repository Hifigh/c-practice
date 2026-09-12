#include <iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;

}
// this will not swap a and b
void swap(int a, int b){ // temp  a  b
    int temp =a;         // 4    4   5
    a=b;                 // 4    5   5
    b = temp;            // 4    5   4
}
//call by reference using pointers
// void swapPointer(int*a,int*b){
//     int temp =*a;
//     *a=*b;
//     *b= temp;
// }

// call by regerene using c++ reference variables
void swapReferenceVar(int &a,int &b){
    int temp =a;
    a=b;
    b= temp;
}

int main(){
    int x= 4, y=5;
    //cout<<"The sum of 4 and 5 is:"<<sum(a, b);
    cout<<"the value of x is "<<x<<"The value of y is "<<y<<endl;
    //swapPointer(&a,&b);// this will swap a and b using pointer refrence
    swapReferenceVar(x ,y); //this will swap a and b usin reference varaibles
    cout<<"the value of x is "<<x<<"The value of y is "<<y<<endl;
    return 0;
}