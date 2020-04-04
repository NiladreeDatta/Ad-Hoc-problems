#include<bits/stdc++.h>
using namespace std;
const int mx = 201;
bool a[mx];

int main()
{
    int tc,n,x,m;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> x;
        for(int i = 1 ; i <= n+x ; i++)
        {
            a[i] = false;
        }
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> m;
            a[m] = true;
        }
        for(int k = n+x ; k > 0 ; k--)
        {
            int v = 0;
            for(int i = 1 ; i <= k ; i++)
            {
                if(!a[i]) v++;
            }
            if(v <= x)
            {
                cout << k << endl;
                break;
            }
        }
    }


    return 0;
}
