#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int a[n+1] = {0};
        int ans = INT_MAX;
        for(int i =1 ; i <= n ; i++)
        {
            int x;
            cin >> x;
            if(a[x])
            {
                ans = min(ans,i-a[x]);
                a[x] = i;
            }
            else
                a[x] = i;

        }
        if(ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else cout << ans + 1 << endl;
    }

    return 0;
}
