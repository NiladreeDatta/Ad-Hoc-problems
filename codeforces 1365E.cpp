#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[n+1];
    long long ans  = 0;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = i ; j <= n ; j ++)
        {
            for(int k = j ; k <= n ; k++)
            {
                ans = max(ans,a[i]|a[j]|a[k]);
            }
        }
    }
    cout << ans << endl;


    return 0;
}
