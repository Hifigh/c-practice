#include <iostream>
using namespace std;

// function prortotype
// type function- name (arguments);
int sum(int a, int b);//gives assurity that sum function is aage
    

int main(){
    int num1 , num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter seconf number"<<endl;
    cin>>num2;
    cout<<"The sum is"<<sum(num1,num2);
}

int sum(int a, int b){
    int c= a+b;
    return c;
}