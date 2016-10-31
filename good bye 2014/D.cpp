#include<iostream>
using namespace std;
int main(){
    int n,t,a[30010];
    cin>>n>>t;
    int tmp=1;
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    bool flag=0;
    while(tmp<=t){
        if(tmp==t){
            flag=1;
            break;
        }
        else{
            tmp+=a[tmp];
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
} 