#include<iostream>
using namespace std;


class Hello{
    private:
        int num1;
        double sn2;

    public:
        Hello(int a1, double a2){
            num1=a1;
            sn2=a2;
        }
        float printResult(){
            return num1*sn2;
        }
};

int main(){
    Hello meow(15,20.51);
    Hello neow(16,35.98);
    cout<<meow.printResult()<<endl;
    cout<<neow.printResult()<<endl;
    return 0;


}
/*int main(){
    unsigned char c=256;
    cout<<c<<endl;
    return 0;

} */
