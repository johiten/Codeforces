#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
bool primeTable[1000010];
bool isPrime(long long n){
	return primeTable[n];
}
int main(){
	memset(primeTable, true, sizeof(primeTable));
	for(int i=2;i<=500003;i++){
		for(int t=2;i*t<=1000005;t++){
			
			primeTable[i*t]=false;
			
		}
	}
	primeTable[1]=false;
	int n;
	cin>>n;
	long long tmp1,tmp2;
	double sq;
	for(int i=0;i<n;i++){
		cin>>tmp1;
		sq=sqrt(tmp1);
		tmp2=(long long)sq;
		if(sq-tmp2<1e-6&&isPrime(tmp2))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
