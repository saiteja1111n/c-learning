#include<iostream>
#include<string>
#include<sstream>
const double pi=3.14159;
#define tab '\t';
using namespace std;
int main() {
	int a=sizeof(int),b=sizeof(char),c=sizeof(unsigned long long);
	cout<<"int size = "<<a<<endl<<"char size = "<<b<<endl<<"long size ="<<c<<"\n";
	string s="do u tab know \
	where i am";
	b=1;
	b=b+(b+4);
	cout<<"whats your age ";
	string name;
	getline(cin,name);
	int age;
	stringstream(name)>>age;
	cout<<"your age is "<<age;	
	int result=a-b+(a=12);
	
	return result;
}
