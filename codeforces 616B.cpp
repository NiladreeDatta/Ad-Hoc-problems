#include<bits/stdc++.h>
using namespace std;

int a[100][100];
int mn = INT_MAX;
int b[100];

int main()
{
    int n ,m;
    cin >> n >> m;
    int a[n][m];
    for(int i  = 0 ; i < n ; i++)
    {
        for(int j = 0 ;  j < m ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            mn = min(mn,a[i][j]);
        }
        b[i] = mn;
        mn = INT_MAX;
    }
    sort(b,b+n);
    cout << b[n-1] << endl;
    //for(int i = 0 ; i < n ; i++) cout << b[i] << " ";
    return 0;
}
