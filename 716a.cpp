#include<iostream>
using namespace std;
int main(){
	int n,c;
	cin>>n>>c;
	int ans = 1;
	int in, lastIn;
	cin>>lastIn;
	for(int i=1;i<n;i++){
		cin>>in;
		if(in-lastIn>c)ans = 1;
		else ans++;
		lastIn = in;
	}
	cout<<ans<<endl;
	return 0;
}
