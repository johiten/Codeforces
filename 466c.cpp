//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//long long sumAi[500010];
//int main(){
//	int n;
//	cin>>n;
//	long long sum,ai;
//	sum=0;
//	sumAi[0]=0;
//	for(int i=0;i<n;i++){
//		cin>>ai;
//		sumAi[i]=sum+ai;
//		sum=sumAi[i];
//	}
//	if(sum%3){
//		cout<<0<<endl;
//		return 0;
//	}
//	//cout<<"here..."<<endl;
//	vector<int> posOf1,posOf2;
//	for(int i=0;i<n-1;i++){
//		if(sumAi[i]==sum/3){
//			
//			posOf1.push_back(i);
//			//cout<<"pos1  "<<i<<endl;
//		}
//		if(sumAi[i]==sum*2/3){
//			
//			posOf2.push_back(i);
//			//cout<<"pos2  "<<i<<endl;
//		}
//	}
//	int ans=0;
//	for(int i=0;i<posOf1.size();i++){
//		
//		int tmp=posOf2.end()-upper_bound(posOf2.begin(),posOf2.end(),posOf1[i]);
//		if(tmp==0)continue;
//		else ans+=tmp;
//		//cout<<"----"<<tmp<<endl;
//	}
//	cout<<ans<<endl;
//	return 0;
//}

#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
const int maxn = 5 * 1e5 + 5;

int n, arr[maxn];
ll s = 0;
vector<int> vec;

ll solve () {
    if (s % 3)
        return 0;

    s /= 3;
    ll p = 0, ret = 0;

    for (int i = 0; i < n; i++) {
        p += arr[i];
        if (p == s)
            vec.push_back(i);
    }

    p = 0;
    for (int i = n-1; i >= 0; i--) {
        p += arr[i];
        if (p == s)
            ret += lower_bound(vec.begin(), vec.end(), i-1) - vec.begin();
    }
    return ret;
}

int main () {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    printf("%lld\n", solve());
    return 0;
}
