#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int ans = 0, timeRemain=240-k;
	for(int i=1;i<=n;i++){
		if(timeRemain>=i*5){
			ans++;
			timeRemain-=(i*5);
		}
		else break;
	}
	cout<<ans<<endl;
	return 0;
}
