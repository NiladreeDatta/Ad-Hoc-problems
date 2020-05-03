#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j =1 ;  j <= m ; j++)
        {
            cin >> a[i][j];
        }
    }
    long long sum = 0 ;
    for(int i  = n ; i >= 1 ; i--)
    {
        for(int j = m ; j >= 1 ; j--)
        {
            if(!a[i][j])
                a[i][j] = min(a[i+1][j],a[i][j+1]) - 1;
                sum += a[i][j];
        }
    }
    for(int i  = 1 ;  i<= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(a[i][j] <= a[i][j-1] || a[i][j] <= a[i-1][j])
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << sum << endl;

    return 0;
}
