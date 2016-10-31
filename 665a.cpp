#include <iostream>
using namespace std;
bool overlap(int,int,int,int);
int main(){
	int a,b,ta,tb,hh,mm;
	char charr;
	cin>>a>>ta>>b>>tb>>hh>>charr>>mm;
	int depart=hh*60+mm;
	int arrive=hh*60+mm+ta;
	int cnt=0;
	for(int b_depart=300;b_depart<24*60;b_depart+=b){
		if(overlap(depart,arrive,b_depart,b_depart+tb))cnt++;
	}
	cout<<cnt<<endl;
	//system("pause");
	return 0;
}
bool overlap(int a,int b,int c,int d){
	if(c>=b)return false;
	else if(a>=d)return false;
	return true;
}
