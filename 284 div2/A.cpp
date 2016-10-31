#include<iostream>
using namespace std;
int main(){
    int n,m,m1,m2;
    while(cin>>n>>m){
        //cin>>m1>>m2;
        int sum=0;
        m2=0;
        for(int i=0;i<n;i++){
            cin>>m1;
            int tmp=m2;
            while(tmp+m<m1){
                tmp+=m;
            }
            cin>>m2;
            sum+=m2-tmp;
        }
        cout<<sum<<endl;
    }
    return 0;
}
