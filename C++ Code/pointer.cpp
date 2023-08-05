#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* pr; // you can also declare pointer by this ' int *pr '
    pr=&a;
    a=10;
   // *pr=10; (you can also change value by this method)

    cout<<"The Value of a is "<<*pr<<endl;
    cout<<"The Value of a is "<<a<<endl;
    return 0;

}