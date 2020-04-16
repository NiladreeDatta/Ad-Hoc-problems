#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int a[n+1] ;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
    }

    int s = 0, ans = 0;
    while(true)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] <= s)
                a[i] = n+5,s++;
        }
        if(s == n)
        {
            break;
        }
        ans++;
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(a[i] <= s)
                a[i] = n+5,s++;
        }
        if(s == n)
        {
            break;
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}
