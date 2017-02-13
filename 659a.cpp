#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a,b;
    while(scanf("%d%d%d",&n,&a,&b)!=EOF)
    {
    a--;
     a=a+100*n;
     a=a+b;
     printf("%d\n",a%n+1);
    }
    return 0;
}


