#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using func with 2 arg"<<endl;
    return a+b;
}


int sum(int a, int b, int c){
    cout<<"Using func with 3 arg"<<endl;
    return a+b+c;
}
// to find volume of cylinder or any shape
double volume(double r,int h){
    return(3.14*r*r*h);
}
int main(){
    cout<<" The sum of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<" The sum of 3 and 6 and 8 is"<<sum(3,6,8)<<endl;
    cout<<" the volume of cylinder is "<<volume(1,1)<<endl;
    return 0;
}