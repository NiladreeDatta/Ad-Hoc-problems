#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while(tc--)
    {
        long long h,c,t,x,ans = 2;
        cin >> h >> c >> t;
        if(h+c-(2*t)) x = (c-t)/(h+c-(2*t));
        else x = 0;
        double dif = abs((double)t - ((h+c)/2.0)),chk;// hot == cold
        chk = abs((double)t - (x*h + (x-1.0)*c)/(2.0*x-1.0));
        if(chk < dif and x-1 >= 0)
        {
            ans = 2*x - 1;
            dif = chk;
        }
        chk = abs((double)t - ((x + 1.0)*h + x*c)/(2.0*x+1.0));
        if(chk < dif and x >  0)
        {
            ans = 2*x + 1;
            dif = chk;
        }
        cout << ans << endl;
    }


    return 0;
}
