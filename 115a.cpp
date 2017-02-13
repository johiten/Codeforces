#include<iostream>
#include<vector>
using namespace std;
struct Emp{
	vector<int> son;
}emps[2010];
int depth;
void dfs(int p, int d){
	if(d>depth)depth=d;
	for(int i=0;i<emps[p].son.size();i++){
		dfs(emps[p].son[i],d+1);
	}
}

int main(){
	depth=0;
	int n,tmp;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		if(tmp==-1){
			emps[0].son.push_back(i);
		}
		else{
			emps[tmp].son.push_back(i);
		}
	}
	dfs(0,0);
	cout<<depth<<endl;
	return 0;
} 
