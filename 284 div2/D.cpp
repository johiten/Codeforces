#include<iostream>
using namespace std;
int n,T,pi[5010],ti[5010];
double dp(int i,int t,int rtime){
       if(rtime==0)return 0.0;
       else if(i==n)return 0.0;
       else if(t==ti[i])return 1+dp(i+1,1,rtime-1);
       else return pi[i]/100.0*(1+dp(i+1,1,rtime-1))+(1-pi[i])/100.0*dp(i,t+1,rtime-1);
} 

int main(){
    while(cin>>n>>T){
    for(int i=0;i<n;i++){
            cin>>pi[i]>>ti[i];
    }
    cout<<dp(0,1,T)<<endl;
    }
    return 0;
}