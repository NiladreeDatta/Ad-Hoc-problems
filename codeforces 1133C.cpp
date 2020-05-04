#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    int ans = 1 , j = 0;
    for(int i = 0 ; i < n ; i++)
    {
        while(j <= n-1 and a[j] - a[i] <= 5)
        {
            j++;
        }
        ans = max(ans,j-i);
    }
    cout << ans << endl;


    return 0;
}
