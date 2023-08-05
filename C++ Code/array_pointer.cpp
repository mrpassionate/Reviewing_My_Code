#include<iostream>
using namespace std;

int main(){
    int ara[5];
    int* ptr;
    ptr=ara; // same as ' ptr=&ara[0]
    cout<<"Taking Inputs: "<<endl;
    for(int i=0;i<5;i++){
        cin>>ara[i];
    }
    for(int i=0;i<5;i++){
        cout<<&ara[i]<<"\n";
    }
    cout<<"The Outputs are : \n\n";
    
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<"\n";

    }
    return 0;
}