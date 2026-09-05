#include <iostream>
using namespace std;

int main(){
   // Array Examaple
    int marks[4]={23,45,56,89};
    int mathmarks[4];
    mathmarks[0]=2278;
    mathmarks[1]=7388;
    mathmarks[2]=378;
    mathmarks[3]=578;

    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    // we can also change the value in array 
    marks[2]=445654654;
    cout<<"these are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // now using for loop
    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }
     // now using while loop
    int i=0;
    while (i<4)
    {
        cout<< marks[i]<<endl;
        i++;
    }
        
    return 0;
}