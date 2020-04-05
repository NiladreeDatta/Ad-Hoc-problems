#include<bits/stdc++.h>
using namespace std;
char a[101][101];
int i,j,l,p,n,m;

int main()
{
    cin >> n >> m;
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= m ; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i = 1 ; i <= n ;i ++)
    {
        for(j = 1 ; j <= m ; j++)
        {
            p = 0;
            for(l = 1 ; l <= n ; l++)
            {
                if(l != i)
                {
                    if(a[i][j] == a[l][j]) p++;
                }
            }
            for(l = 1 ; l <= m ; l++)
            {
                if(l != j)
                {
                    if(a[i][j] == a[i][l]) p++;
                }
            }
            if(!p) cout << a[i][j] ;
        }


    }


    return 0;
}
