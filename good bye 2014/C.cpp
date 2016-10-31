#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,w[510],b[1010],first[510],v_size=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>w[i];
        first[i]=1;
    }
    int sum=0;
    vector<int> sa,sb;
    for(int i=1;i<=m;i++){
        cin>>b[i];
        if(first[b[i]]){
            first[b[i]]=0;
            for(int j=sa.size()-1;j>=0;--j)sum+=w[sa[j]];
            sa.push_back(b[i]);
        }
        else{
            sb.clear();
            int j=sa.size()-1,tmp_sum=0;
            while(j>=0&&b[i]!=sa[j]){
                tmp_sum+=w[sa[j]];
                sb.push_back(sa[j]);
                sa.pop_back();
                --j;
            }
            sum+=tmp_sum;
            sa.pop_back();
            while(sb.size()){
                sa.push_back(sb[sb.size()-1]);
                sb.pop_back();   
            }
            sa.push_back(b[i]);
        }
        //cout<<"No."<<i<<" The stack is: ";
        //for(int i=0;i<sa.size();i++)cout<<sa[i]<<' ';
        //cout<<endl;
    }
    cout<<sum<<endl;
    //cin>>m;
    return 0;
} 