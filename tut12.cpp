#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;

}ep;

// int main(){
//     ep nitin;
//     nitin.eID=1;
//     nitin.favChar = 'N';
//     nitin.salary= 1246543;
//     cout <<"The value is "<<nitin.eID<<endl;
//     cout <<"The value is "<<nitin.favChar<<endl;
//     cout <<"The value is "<<nitin.salary<<endl;

union money
{
    int rice;//4
    char car;//1
    float pounds;//4
};

int main(){
    // ep nitin;
    // union money m1;
    // m1.rice =34;
    // m1.car ='c';
    // cout << m1.rice << endl;
    
    enum Meal{breakfast , lunch , dinner};
    Meal m1 = lunch;
    cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    
    
    return 0;
}