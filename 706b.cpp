#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<int> v;
//int biSearch(int target){
//	if(target<v[0])return 0;
//	if(target>v[v.size()-1])return v.size();
//	int l=0;int r=v.size()-1;int m=(l+r)/2;
//	while(l<=r){
//		//cout<<"l "<<l<<"  r "<<r<<"  v[m] "<<v[m]<<endl;
//		
//		 
//		if(v[m]>target){
//			r=m-1;
//			m=(l+r)/2;
//		}
//		else{
//			l=m+1;
//			m=(l+r)/2;
//		}
//	}
//	return m+1;
//}
//int main(){
//	
//	int n;
//	cin>>n;
//	int tmp;
//	//v.push_back(0);
//	for(int i=0;i<n;i++){
//		cin>>tmp;
//		v.push_back(tmp);
//	}
//	sort(v.begin(),v.end());
//	//for(int i=0;i<v.size();i++)
//		//cout<<v[i];
//	//cout<<endl;
//	int m;
//	cin>>m;
//	while(m--){
//		cin>>tmp;
//		//cout<<biSearch(tmp)<<endl;
//		cout<<upper_bound(v.begin(),v.end(),tmp)-v.begin()<<endl;
//	}
//	return 0;
//}


int main(){
	string s="hello!  ";
	for(int i=1;i<4;i++)
		cout<<s<<endl;
	return 0;
}
