#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
   //selection control structure if else if else ladder
    // if(age<19){
    //     cout<<"You Cant come in party"<<endl;

    // }
    // else if(age==18){
    //     cout<<"You  can come"<<endl;
    // }
    // else {
    //     cout<<"u also come"<<endl;
    // }

    //selection contro; structure switch case statements
    switch (age)
    {
    case 18:
        /* code */
        cout<<"you are 18";
        break;
    case 19:
        /* code */
        cout<<"you are 19"<<endl;
        break;
    case 20:
        /* code */
        cout<<"you are 20"<<endl;
        break;
    case 21:
        /* code */
        cout<<"you are 21"<<endl;
        break;
    
    default:
    cout<<"no special cases"<<endl;
        break;
    }

    

    return 0;
}