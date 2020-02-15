#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,tc,x,y;
    cin >> n >> d;
    cin >> tc;
    while(tc--)
    {
        cin >> x >> y;
        if((x-y <= d && x-y >= -d) && (x+y >= d && x+y <= 2*n-d) )
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }

    return 0;
}
