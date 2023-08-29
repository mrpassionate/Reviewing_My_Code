#include<iostream>
using namespace std;

/*int binary_search(int len,int ara[],int x){
	
	}
}
*/
int main(){
	int ara[5]={12,45,89,90,123};
	int x,len=5;
    int mid,i;
	mid=len/2;
//	cout<<mid;
    cout<<"Which number do you want to find : ";
	cin>>x;
	while(1){
		if(x > ara[mid])
			mid=(mid+len)/2;
            if(mid ==(len-1) && x > ara[mid]){
                cout<<"sorry\n";
                break;
            }
		else if(x < ara[mid]){
			mid=mid/2;
            if(mid == 0 && x < ara[mid]){
                cout<<"Sorry"<<endl;
                break;
            }
		}
		else if(x == ara[mid]){
			cout<<"Yeah, We have found it at : "<< " position "<< mid+1;
			break;
			//return mid;
		}
		/*else if(mid == 0 && x != ara[mid] && mid >(len-1)){
			cout<<" Sorry , You haven't found\n";
			break;
            //return -1;
		}
        else{
            cout<<"hell";
            break;
        } */
	//len=5;
    }
	
    //f=binary_search(len,ara,n);
   // cout<<f+1;
	return 0;
}
