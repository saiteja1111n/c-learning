#include<iostream>
using namespace std;
int main() {
	string _s1;
	cout<< _s1<<" this is initial value of _s1";//initial calue of string is ""
	while(_s1!="") {
		cout<<"\nGive the string value\n";
		getline(cin,_s1);
	}
	do{
		cout<<"\nGive the string value\n";
		getline(cin,_s1);
	}while(_s1!="bye");
	 for(int i=0,n=100;i!=n;i++,n--) {
	 	cout<<"i="<<i<<"\t"<<"n="<<n<<"\n";
	 }
	 string str="hello";
	/* for(char c : str) 
	 cout<<"["<<c<<"]";*/// ranged for loops are not allowed in c++98 mode dont know why
	 int a=10;
	 label:
	 	if(a>0) {
	 		cout<<a;
	 		a--;
	 		goto label;
	 	}
	 	
}
