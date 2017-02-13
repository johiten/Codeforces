#include<iostream>
using namespace std;
int main(){
	int k,r,ans=1;
	cin>>k>>r;
	while(1){
		if(ans*k%10==r||ans*k%10==0){
			cout<<ans<<endl;
			return 0;
		}
		ans ++;
		if(ans == 10){
			cout<<"10"<<endl;
			return 0;
		}
	}
}
