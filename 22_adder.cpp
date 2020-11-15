#include<iostream>
using namespace std;
class adder{
	int a,b,c,total;
public:
	adder(){
		total=0;
	}
	void add(int i){
		total+=i;
	}
	int gettotal(){
		return total;
	}
};
int main(){
	adder o;
	o.add(20);
	o.add(30);
	o.add(10);
	cout<<"total="<<o.gettotal();
	return 0;
}