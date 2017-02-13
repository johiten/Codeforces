#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n,m;
	char innnn;
	bool ans = false;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		if(ans)break;
		for(int j=0;j<m;j++){
			getchar();
			innnn=getchar();
			if(innnn=='C'||innnn=='M'||innnn=='Y'){
				ans = true;
			}
		}
	}
	if(ans){
		cout<<"#Color"<<endl;
	}
	else cout<<"#Black&White"<<endl;
	return 0;
}
