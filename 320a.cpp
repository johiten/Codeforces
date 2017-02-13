#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string inString;
	cin>>inString;
	int l=inString.length();
	int i=0;
	bool test1,test2,test3;
	while(i<l){
		
		test1=test2=test3=true;
		//if(i<l-2){
			if(i<l-2&&inString[i]=='1'&&inString[i+1]=='4'&&inString[i+2]=='4'){
				i+=3;
				continue;
			}
			else{
				test3=false;
			}
		//}
		//if(i<l-1){
			if(i<l-1&&inString[i]=='1'&&inString[i+1]=='4'){
				i+=2;
				continue;
			}
			else{
				test2=false;
			}
		//}
	
		if(inString[i]=='1'){
			i++;
			//cout<<"here"<<endl;
			continue;
		}
		else{
			test1=false;
		}
		
		if(!(test1||test2||test3)){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
