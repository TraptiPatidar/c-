#include<iostream>
using namespace std;
class car{
	string brand,model;
	int year;
public:
	car(string x,string y,int z){
		brand=x;
		model=y;
		year=z;
	}
	void dis(){
		cout<<"car brand "<<brand<<" model "<<model<<" year "<<year;
	}
};
int main(){
	car a("BMW","x5",1999);
	a.dis();
	return 0;
}