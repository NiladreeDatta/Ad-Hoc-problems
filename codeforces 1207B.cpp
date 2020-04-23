#include<bits/stdc++.h>
using namespace std;
const int N = 55;
int n,m,i,j,a[N][N],b[N][N];
int x[N*N],y[N*N],cnt;
int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j  = 1 ; j <= m ; j ++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j  = 1 ; j <= m ; j ++)
        {
            if(a[i][j]&&a[i+1][j]&&a[i][j+1]&&a[i+1][j+1])
            {
                cnt++;
                x[cnt]=i;
                y[cnt]=j;
                b[i][j] = 1;
                b[i+1][j] = 1;
                b[i][j+1] = 1;
                b[i+1][j+1] = 1;
            }
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j  = 1 ; j <= m ; j ++)
        {
            if(a[i][j] != b[i][j])
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << cnt << endl;
    for(int i = 1 ; i <= cnt ; i++)
        cout << x[i] << " " << y[i] << endl;

    return 0;
}
