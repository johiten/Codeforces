#include<stdio.h>
#include<string.h>
#include<queue>
#include<algorithm>
using namespace std;
queue<int>q,p;
int  bfs(int x,int y){
    int visit[10010];
    memset(visit,0,sizeof(visit));
    while(!q.empty())q.pop();
        while(!p.empty())p.pop();
    q.push(x);
    visit[x] = 1;
    p.push(0);
    while(!q.empty()){
        int number = q.front();
        int ceng = p.front();
        q.pop();
        p.pop();
        if(number == y)return ceng;
    if(number*2<=10000&&!visit[number*2]){
        q.push(number*2);
        visit[number*2] = 1;
        p.push(ceng+1);
    }   
    if(number -1 > 0&&!visit[number-1]){
        q.push(number-1);
        visit[number-1] = 1;
        p.push(ceng+1);
    }
    }

}

int main(){
    int n,m;
    while(~scanf("%d%d",&n,&m)){

        printf("%d\n",bfs(n,m));
    }
} 
