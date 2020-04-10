#include<bits/stdc++.h>
using namespace std;

long long int a[100000];

int main()
{
    long long int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n,x;
        cin >> n >> x;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a,a+n);
        reverse(a,a+n);
        long long int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] >= x) ans++;
        }
        long long int extra = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] > x) extra += (a[i]-x);
        }
        //cout << ans << " " << extra << endl;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] < x)
            {
                if(x-a[i] <= extra)
                {
                    ans++;
                    extra -= (x-a[i]);
                }
            }
        }
        cout << ans << endl;

    }


    return 0.;
}
