#include<iostream>
#include<cstring>
using namespace std;

//Method 1  
struct Person{              
    char name[50];
    int age;
    float salary;                                    
};

/* // Method 2
struct Person{  
    char name[50];
    int age;
    float salary;

} p1;

*/

// Method 3
/* typedef struct{
     char name[50];   
     int age;
     float salary;

}Person;

*/
int main(){
    struct Person p1;   // Person p1;  /* If you follow method 3 */ 
    strcpy(p1.name,"Rizwan Alam");
    p1.age=18;
    p1.salary=25000.00;

    cout<<"Name: "<<p1.name<<"\n";
    cout<<"Age : "<<p1.age<<"\n";
    cout<<"Salary: "<<p1.salary<<"\n";

}