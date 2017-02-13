#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	if(m>n){
		int tmp=m;
		m=n;
		n=tmp;
	}//m<=n for all the time
	if(n>=2*m){
		cout<<m<<endl;
		return 0;
	}
	else{
		int ans=0;
		while(1){
			if(n>=m&&n>1&&m>0){
				n-=2;m--;ans++;
				continue;
			}
			if(m>=n&&m>1&&n>0){
				m-=2;n--;ans++;
				continue;
			}
			if(m<=1&&n<=1)break;
			if(m<1||n<1)break;
		}
		cout<<ans<<endl;
		return 0;
	}
	return 0;
}
