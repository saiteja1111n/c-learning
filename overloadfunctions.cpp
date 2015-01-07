#include<iostream>
#include<sstream>
using namespace std;

int mult(int a,int b) {
	return a*b;
}

double mult(double a1,double b1) {
	return a1*b1;
}


int main() {
	int a,b;
	double a1,b1;
	cout<<"Give the values of a and b"<<endl;
	cin>>a;
	cin>>b;
	cout<<"\nGive the values of a1 and b1"<<endl;
	cin>>a1;
	cin>>b1;
	cout<<"\nmult(int a,int b)"<<mult(a,b)<<"\nmult(double a,double b)"<<mult(a1,b1)<<"\n"<<endl;//mult(a1,b) cant use this. it says call of overload
}
