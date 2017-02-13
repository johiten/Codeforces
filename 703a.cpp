#include<iostream>
using namespace std;
int main(){
	int n,t1,t2;
	cin>>n;
	int m=0,c=0;
	for(int i=0;i<n;i++){
		cin>>t1>>t2;
		if(t1>t2)m++;
		if(t2>t1)c++;
	}
	if(m>c)cout<<"Mishka"<<endl;
	if(c>m)cout<<"Chris"<<endl;
	if(c==m)cout<<"Friendship is magic!^^"<<endl;
	return 0;
}
