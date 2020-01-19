#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ans = 0,n;
    scanf("%lf",&n);
    for(int i  = 1 ; i <= n ; i++)
    {
        ans += 1.0/i;
    }
    printf("%.12lf",ans);

    return 0;
}

