#include<iostream>
using namespace std;
int main(){
	int c=0,ch,a,b;
	while(c==0){
		cout<<"1.addition\n2.substraction\n3.division\n4.multiplication\n5.increment\n6.decrement\n";
		cout<<"Enter your Choice ";
		cin>>ch;
		switch(ch){
			case 1:cout<<"enter two values ";
			cin>>a>>b;
			cout<<a+b<<"\n";
			break;
			case 2:cout<<"enter two values ";
			cin>>a>>b;
			cout<<a-b<<"\n";
			break;
			case 3:cout<<"enter two values ";
			cin>>a>>b;
			cout<<a/b<<"\n";
			break;
			case 4:cout<<"enter two values ";
			cin>>a>>b;
			cout<<a*b<<"\n";
			break;
			case 5:cout<<"enter value ";
			cin>>a;
			cout<<++a<<"\n";
			break;
			case 6:cout<<"enter value ";
			cin>>a;
			cout<<--a<<"\n";
			break;
		}
		cout<<"enter 0 to continue and 1 to exit ";
		cin>>c;
	}
	return 0;
}