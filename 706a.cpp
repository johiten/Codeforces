#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,m;
    while (~scanf("%lf%lf",&n,&m))
    {
        int z;
        scanf("%d",&z);
        double res = -1,x,y,v;
        for (int i = 0 ; i < z ; i++ )
        {
            scanf("%lf%lf%lf",&x,&y,&v);
            if (res == -1)
            {
                res = sqrt((x - n ) * (x - n) + (y - m) * (y - m)) / v;
            }
            else if(res > sqrt((x - n ) * (x - n) + (y - m) * (y - m)) / v)
            {
                res = sqrt((x - n ) * (x - n) + (y - m) * (y - m)) / v;
            }
        }
        printf("%f\n",res);
    }
    return 0;
}
