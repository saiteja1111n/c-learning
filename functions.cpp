//function declaration must be above main like in c

#include<iostream>
using namespace std;
int sub(int& a,int& b);
int add(int& a,int& b) {
	a*=2;
	b*=2;
	return a+b;
}
//using call by value is overhead while using strings but not with basic data types. for complex we use call by ref
// using const will not allow us to change the values of s1 and s2 in the function
string concat(const string& s1,const string s2) {
	return s1+s2;
} 
int main() {
	int a =10;
	int b=20;
	cout<<add(a,b)<<'\n';
	cout<<sub(a,b)<<'\n';
	string s1="hello",s2=" sai";
	cout<<concat(s1,s2);
}
int sub(int& a,int& b) {
	a*=2;
	b*=2;
	return a-b;
}
