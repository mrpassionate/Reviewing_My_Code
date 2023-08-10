#include<stdio.h>
#include<string.h>


/* Method 1  
struct Person{              
    char name[50];
    int age;
    float salary;                                    
}; */

/* // Method 2
struct Person{  
    char name[50];
    int age;
    float salary;

} p1;

*/

// Method 3
 typedef struct{
     char name[50];   
     int age;
     float salary;

}Person;


int main(){
   // struct Person p1;   //   /* If you follow method 3 */ 
    Person p1;
    strcpy(p1.name,"Rizwan Alam");
    p1.age=18;
    p1.salary=25000.00;

    printf("Name: %s\n",p1.name);
    printf("Age : %d\n",p1.age);
    printf("Salary: %0.2f\n",p1.salary);

}