#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath> 
using namespace std;
int f(char a,char b){
	if(a-b<-13)return 26+a-b;
	else if(a-b>13)return 26-a+b;
	else return abs(a-b);
}
int main(){
	string inString;
	int ans=0;
	cin>>inString;
	inString="a"+inString;
	for(int i=1;i<inString.length();i++){
		ans+=f(inString[i-1],inString[i]);
	}
	cout<<ans<<endl;
	return 0;
}
