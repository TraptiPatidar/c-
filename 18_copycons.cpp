#include<iostream>
using namespace std;
class cl{
	int m,n;
public:
	cl( cl &i){
		m=i.m;
		n=i.n;
	}
	cl(int a,int b){
		m=a;
		n=b;
	}
	void display(){
		cout<<"m="<<m<<"\nn="<<n;
	}
};
int main(){
	cl ob(20,8);
	cl obj(ob);
	obj.display();
	return 0;
}