//c++ is case sensitive
//endl ends the line in the string
//declatarion can be done in three ways a=10,a(10),a{10} 
//uning namespace to get library files 
//using \" to get "" show in string
//string is a complex datatype even in c++
// used / to get stirng  to new line
/*four types oof data 
character: basic is char of one byte 
integer: basic is int (there are unsigned, signed , short, long, long long)
floating point: basic is float(there are float, double, long double)
boolean type: boolean true or false*/
//can use both #define r const to change the value 
// && and || are logival operations
#include<iostream>
using namespace std;
const double pi=3.141;//what is the difference between const and #define
#define newline '\n'
int main() {
	int a=10,b(2),c {40};//need to know y they are using three ways to declare variables
	string mystring="this is the data of string variable";
	cout<< mystring<<endl;
	std::cout<<"the a value is "<<a;
	cout<<"\nthus this became the second line an  \
	the values of b and c are "<<b<<" and "<<c<<endl;
	//auto result=a; auto is not working in devc++ should find out whats the reason
	int result=a-b+c;
	cout<<"result is equal to \"a-b+c\" i.e. "<<result;
	float r1=pi*2;
	cout<<newline<<r1;
	int d,e,f;
	e=f=d=22;//this is possible but int e=f=d=22 is not possible
	e*=f-2;//eqivalent to e=e*(f-2);
	cout<<"\ne="<<e<<endl;
	cout<<((a>b)&&(b<c));//false means 0 and 1 means true. 
	//here left is evaluted first if left is false answer is firectly given as false
	int p=a>b ? a:b;
	cout<<"\ngives which one is greater a or b "<<p;//conditional ternary operator
	int g=(b=a,b=b+2,b=b+4,b+6);//first evalutes leftside and then assigns write side operation.
	// so more than two operations are possible
	cout<<newline<<g;
	string s;
	cout<<"\ngive the s value ";
	cin>>s;//it only takes only until it encounters space
	cout<<"\n"<<s<<"\ngive another value ";
	getline(cin,s);// always use getline to get data from console
	//dont know if there is any reason for using getline than cin
	cout<<"\n"<<s;
}

