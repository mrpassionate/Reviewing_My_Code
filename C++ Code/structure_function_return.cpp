#include<iostream>
using namespace std;

struct Person{
    char name[50];
    int age;
    float salary;
};
Person getData(Person);
void displayData(Person);

int main(){
    Person p,temp;
    temp=getData(p);
  //  p=temp; //if doesn't write this 
    displayData(p);

    return 0;
}

Person getData(Person p){
    cout<<"Enter full Name: ";
    cin.get(p.name,50);
    
    cout<<"Enter age: ";
    cin>>p.age;

    cout<<"Enter Salary: ";
    cin>>p.salary;

    return p; // if doesn't return ? 
}

void displayData(Person p){
    cout<<"\nDisplaying Information: "<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Salary: "<<p.salary;
}