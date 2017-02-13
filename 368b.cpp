#include<iostream>
#include<cstring>
using namespace std;
int main(){
	bool visitedN[100010];
	int ai[100010],ans[100010];
	memset(visitedN,false,sizeof(visitedN));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ai[i];
	}
	int query;
	ans[n]=1;
	visitedN[ai[n]]=true;
	for(int i=n-1;i>0;i--){
		if(!visitedN[ai[i]]){
			ans[i]=ans[i+1]+1;
			visitedN[ai[i]]=true;
		}
		else ans[i]=ans[i+1];
	}
	
	while(m--){
		cin>>query;
		cout<<ans[query]<<endl;
	}
	return 0;
}
