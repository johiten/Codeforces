#include<map>
#include<iostream>
#include<cstring>
using namespace std;
#define UP true
#define DOWN false
int hash[10010];
long long n,m;
int getNextPos(int nowPos,bool* direction){
	int a=nowPos/100;
	int b=nowPos%100;
	if(a==0){
		*direction=UP;
		return 100+(b+1)%m;
	}
	else if(a==n-1){
		*direction=DOWN;
		return 100*(n-2)+(b+1)%m;
	}
	else{
		if(*direction==UP){
			return (a+1)*100+(b+1)%m;
		}
		else{
			return (a-1)*100+(b+1)%m;
		}
	}
}
int main(){
	long long k,x,y;
	cin>>n>>m>>k>>x>>y;
	memset(hash,0,sizeof(hash));
	
	bool upOrDown=UP;
	int targetPos=(x-1)*100+y-1;
	int nowPos=0;
	hash[nowPos]++;
	int nextPos=getNextPos(nowPos,&upOrDown);
	int cycleNum=1;
	while(nextPos){
		cout<<"   ---   "<<nextPos<<endl;
		hash[nextPos]++;
		cycleNum++;
		nextPos=getNextPos(nextPos,&upOrDown);
	}
	cout<<"cycleNum = "<<cycleNum<<endl;
	return 0;
}
