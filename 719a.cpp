#include<iostream>
using namespace std;
int main(){
	int n,in1,in2;
	cin>>n;
	if(n==1){
		cin>>in1;
		if(in1==0)cout<<"UP"<<endl;
		else if(in1==15)cout<<"DOWN"<<endl;
		else cout<<"-1"<<endl;
		return 0;
	}
	else{
		for(int i=0;i<n-2;i++)cin>>in1;
		cin>>in1>>in2;
		if(in1>in2){
			if(in2==0){
				cout<<"UP"<<endl;
			}
			else{
				cout<<"DOWN"<<endl;
			}
		}
		else{
			if(in2==15){
				cout<<"DOWN"<<endl;
			}
			else{
				cout<<"UP"<<endl;
			}
		}
		return 0;
	}
	return 0;
} 
