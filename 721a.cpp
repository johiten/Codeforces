#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<int> v;
	string inString;
	cin>>n;
	cin>>inString;
	inString = 'W'+inString+'W';
	int ans = 0;
	for(int i=0;i<n+2;i++){
		int length=0;
		if(inString[i]='W'&&inString[i+1]=='B'){
			while(!(inString[i+length]=='B'&&inString[i+length+1]=='W')){
				length++;
			}
			v.push_back(length);
			i+=length;
		}
	}
	if(v.size()==0){
		cout<<"0"<<endl;
	
	}
	else{
		cout<<v.size()<<endl;
		cout<<v[0];
		for(int i=1;i<v.size();i++)cout<<" "<<v[i];
		cout<<endl;
	}
	return 0;
}
