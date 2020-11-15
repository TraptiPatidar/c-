#include<iostream>
using namespace std;
class cl{
	int a;
public:
	cl(int);
};
cl::cl(int t=8){
	a=t;
	cout<<"a= "<<a;
}
int main(){
	cl ob;
	return 0;
}