#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter value of a and b";
	cin>>a>>b;
	if(a&b)
		cout<<"a&b condition treu\n";
	if(a^b)
		cout<<"a^b condition true\n";
	if(a|b)
		cout<<"a|b condition true\n";
	if(~a)
		cout<<"~a condition true\n";
	if(~b)
		cout<<"~b condition true\n";
	c=a>>1;;
	cout<<"by right shifting a "<<c;
	c=a<<1;
	cout<<"\nby left shifting a "<<c;
	c=b<<1;
	cout<<"\nby left shifting b "<<c;
	c=b>>1;
	cout<<"\nby right shifting b "<<c;
	return 0;
}