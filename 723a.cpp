#include <iostream>
#include <cmath>
using namespace std;
bool aisinbandc(int a,int b,int c){
	return (a>b&&a<c)||(a>c&&a<b);
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(aisinbandc(a,b,c))cout<<abs(b-c)<<endl;
	if(aisinbandc(b,a,c))cout<<abs(a-c)<<endl;
	if(aisinbandc(c,a,b))cout<<abs(a-b)<<endl;
	return 0;
} 
