#include<iostream>
using namespace std;
class a{
public:int a;
	void data(){
	cout<<"enter data ";
	cin>>a;
}
};
int main(){
	a ob;
	ob.data();
	cout<<"a="<<ob.a;
	return 0;
}