#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,x;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> x;
        int mx = 0;
        set <int> s;
        while(n--)
        {
            int m;
            cin >> m;
            s.insert(m);
            mx = max(mx,m);
        }
        if(s.count(x))
        {
            cout << 1 << endl;
        }
        else if(mx > x)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << max(2,(x+mx-1)/mx) << endl;
        }
    }


    return 0;
}
