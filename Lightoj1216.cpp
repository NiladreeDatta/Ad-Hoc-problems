#include<bits/stdc++.h>
using namespace std;

#define PI acos(-1)

int main()
{
    int i,test,r1,r2,h,p,x=1;
    double R,V;
    cin>>test;
    while(test--)
    {
        cin>>r1>>r2>>h>>p;
        R= r2 + (r1-r2)*(double(p)/h);
        V = 1/3.0 * PI * p *( R*R + R*r2 + r2*r2 );
        printf("Case %d: %lf\n",x++ ,V);
    }
    return 0;
}
