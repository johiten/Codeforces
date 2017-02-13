#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	string inString;
	cin>>inString;
	int l=inString.length();
	int ans=pow(2,l)-2;
	for(int i=0;i<l;i++){
		if(inString[i]=='7'){
			ans+=pow(2,l-i-1);	
		}
		
	}
	ans++;
	cout<<ans<<endl;
	return 0;
} 
