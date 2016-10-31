#include<cstdio>
#include<cmath>
#include<cstring>

int n,m;
int a[1000000];

int main()
{
    while(~scanf("%d%d",&n,&m)){
            memset(a,0,sizeof(a));
       int t = 1;
       for(int i=1;i<=n-1;i++) scanf("%d",&a[i]);
       int flag = 0;
       while(t<=n-1){
          printf("%d\n",t); 
          if(t==m) flag = 1;
          t = t + a[t];
          printf("  %d\n",t); 
       }
       printf("%s\n",(flag)?"YES":"NO");
    }
    return 0;
}