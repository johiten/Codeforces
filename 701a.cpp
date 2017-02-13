//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> ans;
//int n,maxSum;
//int a[110];
//bool getAns = false;
//void dfs(int sum,int i){
//	if(getAns)return;
//	if(sum==maxSum&&ans.size()==n/2){
//		getAns=true;
//		for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;
//		return;
//	}
//	if(i>=n)return;
//	if(sum+a[i]<=maxSum){
//		ans.push_back(i);
//		dfs(sum+a[i],i+1);
//		ans.pop_back();
//	}
//	else{
//		dfs(sum, i+1);
//	}
//}
//int main(){
//	int sum=0;
//	ans.clear();
//	
//	
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		sum+=a[i];
//	}
//	maxSum=sum/2;
//	dfs(0,1);
//	for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<queue>
#include<vector>
#include<map>
#include<iostream>
#include<string>
#define LL long long
using namespace std;
struct st
{
    int bef;
    int aft;
}card[105];
bool cmp(st a,st b)
{
    return a.aft<b.aft;
}
int main()
{
//freopen("test.txt","r",stdin);
    int n,ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&card[i].aft);
        card[i].bef=i;
    }
    sort(card+1,card+1+n,cmp);
    for(int i=1;i<=n/2;i++) printf("%d %d\n",card[i].bef,card[n-i+1].bef);
    return 0;
}
