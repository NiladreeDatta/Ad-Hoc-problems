#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int tc,n,x;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        set <int> s;
        int mx = 0;
        int mxrep = 0;
        int a[n+1] = {0};
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x;
            s.insert(x);
            a[x-1]++;
        }
        for(int i = 0 ; i < n ; i++)
        {
            mxrep = max(mxrep,a[i]);
        }
        int setsize = s.size() - 1;
        int ans = min(setsize,mxrep);
        if(mxrep - setsize >= 2)
        {
            ans = setsize+1;
        }

        cout << ans << endl;

    }

    return 0;
}
