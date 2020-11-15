#include<iostream>
using namespace std;
class cl{
	int d;
public:
	cl operator +(cl &a){
	cl temp;
	temp.d=a.d+d;
	return temp;
	}
	void setdata(int a){
		d=a;
	}
	void display(){
		cout<<d;
	}
};
int main(){
	cl a,b,c;
	a.setdata(10);
	b.setdata(20);
	c=a+b;
	c.display();
	return 0;
}