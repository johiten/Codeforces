#include<iostream>
#include<string>
using namespace std;
int main(){
	string inString;
	cin>>inString;
	int l=inString.length();
	for(int i=0;i<l-1;i++){
		if(inString[i]==inString[i+1]){
			if(i+2<l){
				for(char c='a';c<='z';c++){
					if(c!=inString[i]&&c!=inString[i+2]){
						inString[i+1]=c;
						break;
					}	
				}
			}
			else{
				if(inString[i]=='a')inString[i+1]='b';
				else inString[i+1]=inString[i]-1;
				
			}			
		}
	}
	cout<<inString<<endl;
	//system("pause");
	return 0;
}
