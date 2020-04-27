#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int i = 0,j=n-1;
    long long int ans  = 0 , l = 0 , r = 0 ;
    while(i <= j)
    {
        if(l < r) l += a[i++];
        else r += a[j--];
        if(l == r)
            ans = l;
    }
    cout << ans << endl;

    return 0;
}
