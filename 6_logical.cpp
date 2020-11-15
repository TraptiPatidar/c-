#include<iostream>
using namespace std;
int main(){ 
	int a ,b,c;
	cout<<"enter value of a and b and c ";
	cin>>a>>b>>c;
	if(a>b && b>c)
		cout<<"first condition is true\n";
	else
		cout<<"first condition is false\n";
	if(a>b || b>c)
		cout<<"second condition is true\n";
	else
		cout<<"second condition is false\n";
	if(a!=b)
		cout<<"a is not equal to b";
	else cout<<"a is equal to b";
	return 0;
}