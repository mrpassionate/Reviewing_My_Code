#include<iostream>
using namespace std;

int binary_search(int len,int ara[],int x){
	int mid,i;
	mid=len/2;
    cout<<0/2;
	while(mid < 0){
		if(x > ara[mid])
			mid=(mid+len)/2;
		else if(x < ara[mid]){
			mid=mid/2;
		}
		else if(x == ara[mid]){
			cout<<"Yeah, We have found it at : "<< " position"<< mid+1;
			//break;
			return mid;
		}
		else if(mid == 0){
			cout<<" Sorry , You haven't found\n";
			return -1;
		}
	}
}

int main(){
	int ara[5]={12,45,89,90,123};
	int n,len,f;
	len=5;
	cout<<"Which number do you want to find : ";
	cin>>n;
    f=binary_search(len,ara,n);
   // cout<<f+1;
	return 0;
}
