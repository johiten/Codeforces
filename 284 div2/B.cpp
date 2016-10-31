#include<iostream>
#include<map>
#include<string>
using namespace std;
string s1,s2;
int main(){
    int n,m;
    while(cin>>n>>m){
        map<string,string> mp;
        for(int i=0;i<m;++i){
            cin>>s1>>s2;
            if(s1.length()<=s2.length()){
                mp[s1]=s1;
                mp[s2]=s1;
            }
            else{
                mp[s2]=s2;
                mp[s1]=s2;
            }
        }
        cin>>s1;cout<<mp[s1];
        for(int i=1;i<n;i++){
            cin>>s1;
            cout<<' '<<mp[s1];
        }
        cout<<endl;
    }
    return 0;
}
