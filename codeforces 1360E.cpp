#include<bits/stdc++.h>
using namespace std;
bool a[50][50];
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ;  j < n ; j++)
            {
                char c;
                cin >> c;
                a[i][j] = c - '0';
            }
        }
    bool ok = true;
    for(int i = n-2 ; i >= 0 ; i--)
    {
        for(int j = n-2 ; j >= 0 ;j--)
        {
            if(a[i][j] and !a[i+1][j] and !a[i][j+1])
                ok = false;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}
