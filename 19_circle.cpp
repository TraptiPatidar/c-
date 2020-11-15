#include<iostream>
using namespace std;
class cl{
	int radius;
public:
	cl(){
		radius=0;
	}
	cl(int);
	void setradius(int);
	int getdia();
	int getcircum();
	int getarea();
};
cl::cl(int a){
	radius=a;
}
void cl::setradius(int a){
	radius=a;
}
int cl::getdia(){
	return 2*radius;
}
int cl::getcircum(){
	return 2*3.14*radius;
}
int cl::getarea(){
	return 3.14*radius*radius;
}
int main(){
	cl ob1,ob2(3);
	ob1.setradius(5);
	cout<<"for ob1:diameter="<<ob1.getdia()<<"  circumference="<<ob1.getcircum()<<"  area="<<ob1.getarea();
	cout<<"\nfor ob2:diameter="<<ob2.getdia()<<"  circumference="<<ob2.getcircum()<<"  area="<<ob2.getarea();
	return 0;
}