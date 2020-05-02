#include<bits/stdc++.h>
using namespace std;

char a[20][20];
int main()
{
    int n,m;
    cin >> n >> m;
    int c  = 0;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin >> a[i][j];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0  ; j < m ; j++)
        {
            if(a[i][j] == 'W' && (a[i][j+1] == 'P' || a[i][j-1] == 'P' || a[i+1][j] == 'P' || a[i-1][j] == 'P' ))
                c++;
        }
    }
    cout << c << endl;



    return 0;
}
