#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int ai,bi;
}s[5003];
bool cmp(node n1,node n2){
	if(n1.ai!=n2.ai){
		return n1.ai<n2.ai;
		
	}
	return n1.bi<n2.bi;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>s[i].ai>>s[i].bi;
	sort(s,s+n,cmp);
	int ans=s[0].bi;
	for(int i=1;i<n;i++){
		if(s[i].bi>=ans)ans=s[i].bi;
		else ans=s[i].ai;
	}
	cout<<ans<<endl;
	return 0;
}
