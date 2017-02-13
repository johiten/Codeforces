#include <iostream>
#include <string>
using namespace std;
string seatRows[1010];
int check(string s){
	if(s[0]=='O'&&s[1]=='O')return 1;
	if(s[3]=='O'&&s[4]=='O')return 2;
	return 0;
}
int main(){
	int n,temp;
	cin>>n;
	bool ans=false;
	
	for(int i=1;i<=n;i++){
		cin>>seatRows[i];
		if(!ans){
			temp = check(seatRows[i]);
			if(temp == 1){
				ans = true;
				seatRows[i][0]=seatRows[i][1]='+';
			}
			else if(temp == 2){
				ans = true;
				seatRows[i][3]=seatRows[i][4]='+';
			}
		}
	}
	if(ans){
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++){
			cout<<seatRows[i]<<endl;
		}
	}
	else cout<<"NO"<<endl;
	return 0;
}
