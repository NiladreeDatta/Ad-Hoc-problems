#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >> n >> d;
    int a[n+1],b[n+1];
    int mn = 0, mx = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] >> b[i];
        mn += a[i];
        mx += b[i];
    }
    if(mx < d || mn > d)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << min(b[i],d - mn+a[i]) << " ";
        d -= min(b[i],d - mn+a[i]);
        mn -= a[i];
    }
    cout << endl;
    return 0;
}
