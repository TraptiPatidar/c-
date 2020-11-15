#include<iostream>
using namespace std;
class cl{
int a;
public:
	int j;
void getdata();
void display();
};
void cl::getdata(){
	cout<<"enter value ";
	cin>>a;
}
void cl::display(){
	cout<<"a="<<a;
}
int main(){
	cl ob;
	ob.getdata();
	ob.display();
	return 0;
}