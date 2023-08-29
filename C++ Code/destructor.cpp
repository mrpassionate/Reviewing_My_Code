#include<iostream>
using namespace std;

class Line{
	public:
		Line();
		~Line();
		void setLength(double a);
		double getLength();
	private:
		double length;
};

Line::Line(){
	cout<<"Constructor Created"<<endl;
}

Line::~Line(){
	cout<<"Destructor"<<endl;
}

void Line::setLength(double a){
	length=a;
}
double Line::getLength(){
	return length;
}

int main(){
	Line line;
	
	line.setLength(3.3);
	cout<<"Value is : "<<line.getLength()<<endl;
	
	return 0;
}