#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    pair <int,int> a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a,a+n);
    int ans  = 0;
    int b[k+1];
    for(int i = n-k , j = 0 ; i < n ; i++,j++)
    {
        ans += a[i].first;
        b[j] = a[i].second;
    }
    b[k] = n;
    sort(b,b+k);
    //b[0] = 0;
    cout << ans << endl;
    for(int i = 0 ; i <= k ; i++) cout << b[i] << " ";
    /*for(int i = 1 ; i <= k ; i++)
    {
        cout << b[i] - b[i-1] << " ";
    }
    cout << endl;*/

    return 0;
}
