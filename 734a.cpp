#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,a=0,d=0;
	string inString;
	cin>>n;
	cin>>inString;
	for(int i=0;i<n;i++){
		if(inString[i]=='A')a++;
		else d++;
	}
	if(a>d)cout<<"Anton"<<endl;
	if(d>a)cout<<"Danik"<<endl;
	if(a==d)cout<<"Friendship"<<endl;
	return 0;
}
