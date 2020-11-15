#include<iostream>
using namespace std;
class db;
class dm{
	float m,cm;
	public:
		void getdata(){
			cout<<"enter distance\n"<<"in meters  ";
			cin>>m;
			cout<<"in centimeters ";
			cin>>cm;
		}
		void display(){
			cout<<"distance is "<<m<<" meters "<<cm<<" centimeters";
		}
		friend void add(dm &,db &);
};
class db{
	float f,in;
	public:
		void getdata(){
			cout<<"enter distance\n"<<"in feet  ";
			cin>>f;
			cout<<"in inches ";
			cin>>in;
		}
		void display(){
			cout<<"distance is "<<f<<" feets "<<in<<" inches";
		}
		friend void add(dm &,db &);
};
void add(dm &a,db &b){
	int ch;
	int c;
	cout<<"1.dispaly in meters and centimeters\n2.display in feets and inches\nEnter your choice ";
	cin>>ch;
	if(ch==1){
		c=a.cm+a.m*100+b.f*30+b.in*2.54;
		if(c>=100){
			a.m=c/100;
			a.cm=c%100;
		}
		else{
			a.m=0;
			a.cm=c;
		}
		a.display();
	}
	if(ch==2){
		c=a.cm*0.3937+a.m*39.37+b.f*12+b.in;
		if(c>=12){
			b.f=c/12;
			b.in=c%12;
		}
		else{
			b.f=0;
			b.in=c;
		}
		b.display();
	}
}
int main(){
	dm a;
	db b;
	a.getdata();
	b.getdata();
	add(a, b);
	return 0;
}