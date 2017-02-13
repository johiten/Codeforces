#include<iostream>
using namespace std;
int main(){
	int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	int k256=0;
	k256=k5>k6?k6:k5;
	k256=k2>k256?k256:k2;
	k2-=k256;
	int k32=0;
	k32=k3>k2?k2:k3;
	cout<<256*k256+32*k32<<endl;
	return 0;
}
