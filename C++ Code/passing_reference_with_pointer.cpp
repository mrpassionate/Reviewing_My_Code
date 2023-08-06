// Passing reference with pointer 

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"The Values Are : "<<num1<<"  " <<num2<<"\n";

    swap(num1,num2);
     cout<<"The Values Are : "<<num1<<"  " <<num2<<"\n";


}