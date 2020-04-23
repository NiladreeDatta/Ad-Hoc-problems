#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,mx,r,k,a[102];
int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        mx = -1;
        for(j = 1 ; j <= n ; j++)
        {
            cin >> r;
            if(r > mx)
            {
                mx = r;
                k = j;
            }
        }
        a[k]++;
    }
    mx = -1;
    int ans ;
    for(i = 1 ; i <= n ; i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}
