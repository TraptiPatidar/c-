#include<iostream>
using namespace std;
class cl{
	int x,y,z,total;
public:
	cl(){
		total=0;
	}
	void getvalues();
	friend int gettotal(cl);
};
void cl::getvalues(){
	cout<<"value of x,y nad z  ";
	cin>>x>>y>>z;
}
int gettotal(cl ob){
	return ob.x+ob.y+ob.z;
}
int main(){
	cl ob;
	ob.getvalues();
	cout<<"total="<<gettotal(ob);
	return 0;
}