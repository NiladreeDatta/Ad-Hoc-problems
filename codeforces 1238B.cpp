#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,tc;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> r;
        int a[n+1];
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a,a+n);
        n = unique(a,a+n) - a;
        int ans = 0;;
        for(int i =  n - 1 ; i >= 0 ; i--)
        {
            ans += (a[i] - ans*r > 0);
        }
        cout << ans << endl;
    }


    return 0;
}
