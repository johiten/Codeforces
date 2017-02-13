#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int ai[3010];
	cin>>n;
	for(int i=0;i<n;i++)cin>>ai[i];
	sort(ai,ai+n);
	int last=ai[0]+1;
	int ans=0;
	for(int i=1;i<n;i++){
		//cout<<ai[i]<<"  "<<last<<endl;
		if(ai[i]<last){
			ans+=(last-ai[i]);
			last++;
		}
		else{
			last = ai[i]+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
