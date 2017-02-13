//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string inString;
//	cin>>inString;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		int ans=0;
//		int l,r;
//		cin>>l>>r;
//		for(int j=l-1;j<r-1;j++){
//			if(inString[j]==inString[j+1])ans++;
//		}
//		cout<<ans<<endl;
//	}
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;
int main(){
	string inString;
	cin>>inString;
	int dp[100010];
	dp[0]=0;
	int length=inString.size();
	for(int i=0;i<length;i++){
		if(inString[i]==inString[i+1])dp[i+1]=dp[i]+1;
		else dp[i+1]=dp[i];
	}
	int n;
	cin>>n;
	while(n--){
		int l,r;
		cin>>l>>r;
		cout<<dp[r-1]-dp[l-1]<<endl;
	}
	return 0;
}
