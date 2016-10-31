#include<iostream>
using namespace std;
#define ll long long
int check(ll a,ll b,ll c,ll x,ll y){
    if(a*x+b*y+c<0)return -1;
    else return 1;
}
int main(){
    ll homex,homey,schoolx,schooly,ta,tb,tc;
    cin>>homex>>homey>>schoolx>>schooly;
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ta>>tb>>tc;
        if(check(ta,tb,tc,homex,homey)*check(ta,tb,tc,schoolx,schooly)==-1)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}