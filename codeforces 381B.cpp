#include<bits/stdc++.h>
using namespace std;
int b[5005];
int mx,n,ans;
int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        mx = max(mx,x);

        if(b[x] < 2)
        {
            b[x]++;
            ans++;
        }
    }
    if(b[mx] == 2)
        ans--;
    cout << ans << endl;
    for(int i = 1 ; i <= mx ; i++)
    {
        if(b[i] >= 1) cout << i << " ";
    }
    for(int i = mx-1 ; i >= 0 ; i--)
    {
        if(b[i] == 2)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
