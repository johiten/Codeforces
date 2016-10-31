#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v1,v2;
	int n,m,k;
	cin>>n>>m>>k;
	int in;
	for(int i=0;i<k;i++){
		cin>>in;
		v1.push_back(in);
	}
	int cnt=0;
	for(int i=0;i<n*m;i++){
		cin>>in;
		for(int j=0;j<v1.size();j++){
			if(v1[j]==in){
				cnt+=(j+1);
				v2.clear();
				v2.push_back(v1[j]);
				for(int ii=0;ii<j;ii++)v2.push_back(v1[ii]);
				for(int ii=j+1;ii<v1.size();ii++)v2.push_back(v1[ii]);
				v1=v2;
				break;
			}
		}
	}
	
	cout<<cnt<<endl;
	//system("pause");
	return 0;
}
