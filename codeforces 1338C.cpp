#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        int x;
        int mx = INT_MIN;
        cin >> n;
        int ans  = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x;
            mx = max(mx,x);
            if(x < mx)
            {
                ans = max(ans,__lg(mx-x)+1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
