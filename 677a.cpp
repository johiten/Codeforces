#include<iostream>
using namespace std;
int main(){
	int heights;
	int n,h;
	int num=0;
	cin>>n>>h;
	for(int i=0;i<n;i++){
		cin>>heights;
		if(heights>h)num++;
	}
	cout<<n+num<<endl;
	return 0;
}
