#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0 ; i <  n ;i++)
        {
            cin >> a[i];
        }
        int neg = INT_MIN;
        int pos = INT_MIN;
        long long int ans = 0;

            for(int i = 0 ; i < n ; i++)
            {
                if(a[i] < 0 )
                {
                    neg = max(neg,a[i]);
                    if((a[i+1] > 0 )||i == n-1)
                    {
                        ans += neg;
                        neg = INT_MIN;
                    }
                }
                if(a[i] > 0)
                {
                    pos = max(pos,a[i]);
                    if((a[i+1] < 0)|| i == n-1)
                    {
                        ans += pos;
                        pos = INT_MIN;
                    }
                }

            }
            cout << ans << endl;
            ans = 0;

    }

    return 0;
}
