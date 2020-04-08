#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin >> n >>k;
    int a[n+1];
    for(int i = 0 ; i < n ;i ++) cin >> a[i];
    for(int i = 1 ; i < n ; i++)
    {
        int x = a[i] + a[i-1];
        a[i] += max(0,k-x);
        ans += max(0,k-x);
    }
    cout << ans  << endl;
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << " ";

    return 0;
}
