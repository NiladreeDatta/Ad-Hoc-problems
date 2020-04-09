#include<bits/stdc++.h>
using namespace std;
int a[3];
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        memset(a,0, sizeof a);

        cin >> n;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            ++a[x%3];
        }
        int ans = a[0];
        int mn = min(a[1],a[2]);

        ans += mn;

        a[1] -= mn;
        a[2] -= mn;

        ans += (a[1]+a[2])/3;
        cout << ans << endl;

    }

    return 0;
}
