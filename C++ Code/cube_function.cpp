#include<iostream>
using namespace std;

int cubepgr(int n);

int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	int result=cubepgr(num);
	cout<<"The Result is : " <<result<<endl;
	
	return 0;
}

int cubepgr(int n){
	return n*n*n;
}

	