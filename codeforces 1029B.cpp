#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    int ans = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        int j = i;
        while(j <= n-1 and a[j+1] <= a[j]*2)
            j++;

        ans = max(ans,j-i+1);
        i = j;
    }
    cout << ans << endl;

    return 0;
}
