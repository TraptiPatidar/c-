#include<iostream>
using namespace std;
void swap(int a,int b){
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"after swapping\na= "<<a<<"\nb= "<<b;
}
int main(){
	int a,b;
	cout<<"enter value of a and b  ";
	cin>>a>>b;
	swap(a,b);
	return 0;
}