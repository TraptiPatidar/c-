#include<iostream>
using namespace std;
class cl{
	int i;
public:
	cl(int a){
		i=a;
	}
	friend void display(cl d){
		cout<<"i= "<<d.i;
	}
};
int main(){
	cl ob(20);
	display(ob);
	return 0;
}