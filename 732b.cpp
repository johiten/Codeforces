#include<iostream>
using namespace std;
int main(){
	int n,k,ai[510],bi[510];
	cin>>n>>k;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>ai[i];
		bi[i]=ai[i];
	}
	for(int i=2;i<=n;i++){
		if(bi[i]+bi[i-1]<k)bi[i]=k-bi[i-1];
	}
	for(int i=1;i<=n;i++)sum+=bi[i]-ai[i];
	cout<<sum<<endl;
	for(int i=1;i<=n;i++)cout<<bi[i]<<" ";
	cout<<endl;
	return 0;
}
