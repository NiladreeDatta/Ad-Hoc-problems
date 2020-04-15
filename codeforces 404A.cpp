#include<bits/stdc++.h>
using namespace std;
char a[300][300];
int main()
{
    int n;
    cin >> n;
    char a[n][n];
    set <char> x,o,e;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0  ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i ; j < n ; j++)
        {
            x.insert(a[i][j]);
            x.insert(a[i][n-j-1]);
            break;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(j != i && j != n-i-1)
            {
                o.insert(a[i][j]);
            }
        }
    }
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            e.insert(a[i][j]);
        }
    }
    if(x.size() == 1 && o.size() == 1 && e.size() == 2)
    {
        cout << "YES" << endl;
        return 0;
    }
    else cout << "NO" << endl;

    return 0;
}
