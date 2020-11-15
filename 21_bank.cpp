#include<iostream>
using namespace std;
class ac{
	string name,type;
	int ano,bal,i=0;
public:
	ac(){
		ano=i++;
		bal=0;
		type="private";
			}
	void dep(int d){
		bal=bal+d;
	}
	void with(int d){
		cout<<"\ncurrent balance="<<bal;
		bal=bal-d;
	}
	void getname(string n){
		cout<<"name - "<<n;
	}
	void disbal(){
		cout<<"\nbalance - "<<bal;
	}
};
int main(){
	ac a,b;
	a.getname("ram");
	a.dep(30);
	a.with(10);
	a.disbal();
	return 0;
}