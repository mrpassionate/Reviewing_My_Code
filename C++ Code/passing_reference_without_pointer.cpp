/* Passing Reference without pointer */

#include<iostream>
using namespace std;

void swap(int &a,int &b){ // if you write without '&' sign it won't swap the main function's value
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int num1,num2;
    cout<<"Taking Inputs: ";

    cin>>num1;
    cin>>num2;

    cout<<"The outputs are: \n";

    cout<<num1<<"\n";
    cout<<num2<<"\n";

    swap(num1,num2); 

      cout<<"Now The outputs are: \n";

    cout<<num1<<"\n";
    cout<<num2<<"\n";
}