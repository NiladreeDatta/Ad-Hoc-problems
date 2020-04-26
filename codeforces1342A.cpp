#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long int tc,x,y,a,b;
    cin >> tc;
    while(tc--)
    {
        cin >> x >> y >> a >> b;
        if(b > 2*a)
        {
            b = 2*a;
        }
        if(x>y) swap(x,y);
        cout << a*(y-x) + b*x << endl;
    }


    return 0;
}
