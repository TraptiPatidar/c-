#include<iostream>
using namespace std;
class cl{
	int m,n;
public:
	cl(int a,int b){
		m=a;
		n=b;
	}
	void display(){
		cout<<"m= "<<m<<"\nn="<<n;
	}
};
int main(){
	cl ob(10,20);
	ob.display();
	return 0;
}