//function declaration must be above main like in c

#include<iostream>
#include<sstream>
using namespace std;
int sub(int& a,int& b);//we can declare a function like this or like below function declaration
int mult(int&,int b=3);
inline int add(int& a,int& b) {//inline is used to make an optimised call of the function
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
	{
		int a1=10;
		cout<<a1;//can only use a1 within these bracers
		cout<<a<<endl;
	}
	cout<<"give the a value\n";
	getline(cin,s1);
	stringstream(s1)>>a;
	cout<<"give the b value\n";
	getline(cin,s1);
	stringstream(s1)>>b;
	cout<<"\n"<<mult(a,b);
	cout<<"\t"<<mult(a);//we can keep defalut values for parameters like we are doing here
}

int mult(int& a,int b) {
	return a*b;
}
int sub(int& a,int& b) {
	a*=2;
	b*=2;
	return a-b;
}
