#include<bits/stdc++.h>
using namespace std;
int n,k,ans,b;
int main()
{
    cin >> n;
    while(n--)
    {
        cin >> k;
        if(k == 1 || b == 1) ans++;
        b = k;

    }
    cout << ans << endl;
    return 0;
}
