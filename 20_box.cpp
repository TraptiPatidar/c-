#include<iostream>
using namespace std;
class cl{
	int l,br,h;
public:
	cl(int a,int b,int c){
		l=a;
		br=b;
		h=c;
	}
	~cl(){};
	int vol(){
		return l*br*h;
	}
};
int main(){
	cl ob(2,3,4);
	cout<<"volume="<<ob.vol();
	return 0;
}