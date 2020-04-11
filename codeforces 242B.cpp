#include<bits/stdc++.h>
using namespace std;
int mx = 100000;
int a[100000];
int b[100000];
int x = INT_MAX,y=INT_MIN;
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int m,n;
        cin >> m >> n;

        x = min(x,m);
        y= max(y,n);
        a[i] = m;
        b[i] = n;
    }
    int z = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == x && b[i] == y)
        {
            cout << i+1 << endl;
            z = 1;
            break;
        }
    }
    if(z == 0)
    {
        cout << -1 << endl;
    }

    //cout << x << " " << y  << endl;
    return 0;
}
