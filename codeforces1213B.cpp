#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int a[n+1];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        int mn = a[n-1],ans=0;
        for(int i = n - 2 ; i >= 0 ; i--)
        {
            if(a[i] > mn) ans++;

            mn = min(a[i],mn);
        }
        cout << ans << endl;
    }

    return 0;
}
