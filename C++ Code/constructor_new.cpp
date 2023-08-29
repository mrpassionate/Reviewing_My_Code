#include<iostream>
using namespace std;

class Shaon{
    private:
     int i;
	  int f;
public:

	Shaon();

	int sum(int i , int f);
	void display(){
	cout<<"The Value is ";
	}
};

Shaon::Shaon(){
    cout<<"Hello Vai , Constructor value return kore na " <<endl;
    int a,b;
    i=a;
    f=b;

}

int Shaon::sum(int a, int b){
	return (a+b);
}


int main(){
	Shaon var1;
	cout<<var1.sum(12,13);
	return 0;
}
