#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int ai[100010],sortedai[100010];
	int n,startP=0,endP;
	cin>>n;
	endP=n-1;
	for(int i=0;i<n;i++){
		cin>>ai[i];
		sortedai[i]=ai[i];
	}
	sort(sortedai,sortedai+n);
	if(n==1){
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
	}
	else if(n==2){
		cout<<"yes"<<endl;
		if(ai[0]<ai[1])cout<<"1 1"<<endl;
		else cout<<"1 2"<<endl;
	}
	else{
		while(startP<n){//find startP
			if(ai[startP]==sortedai[startP])startP++;
			else break;
		}
		while(endP>startP){
			if(ai[endP]==sortedai[endP])endP--;
			else break;
		}
		if(startP>=endP){
			cout<<"yes"<<endl;
			cout<<"1 1"<<endl;
			return 0;
		}
		for(int i=0;;i++){
			if(ai[startP+i]!=sortedai[endP-i]){
				cout<<"no"<<endl;
				return 0;
			}
			if(endP-i<=startP+i){
				cout<<"yes"<<endl;
				cout<<startP+1<<" "<<endP+1<<endl;
				return 0;
			}
		}
	}
} 
