#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,k,i;
    cin >> n >> k;
    pair<ll,ll> a[n+2];

    for(i = 0 ; i < n ; i++)
    {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a,a+n);
    cout << a[n-k].first << endl;
    for(i = n-k ; i < n ; i++) cout << a[i].second << " ";

    return 0;
}
