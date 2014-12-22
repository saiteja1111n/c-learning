//function declaration must be above main like in c

#include<iostream>
using namespace std;
int sub(int& a,int& b);
int add(int& a,int& b) {
	a*=2;
	b*=2;
	return a+b;
}
int main() {
	int a =10;
	int b=20;
	cout<<add(a,b)<<'\n';
	cout<<sub(a,b);
}
int sub(int& a,int& b) {
	a*=2;
	b*=2;
	return a-b;
}
