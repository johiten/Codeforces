#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool ok(int aa,int bb){
	if(aa==bb+1||aa==bb-1||aa==bb)return true;
	else return false;
}
int main(){
	vector<int>boys,girls;
	int n,m,tmp,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		boys.push_back(tmp);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>tmp;
		girls.push_back(tmp);
	}
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	int pBoy=0, pGirl=0;
	while(pBoy<boys.size()&&pGirl<girls.size()){
		if(ok(boys[pBoy],girls[pGirl])){
			pBoy++;pGirl++;ans++;
		}
		else{
			if(boys[pBoy]>girls[pGirl]){
				pGirl++;
			}
			else pBoy++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
