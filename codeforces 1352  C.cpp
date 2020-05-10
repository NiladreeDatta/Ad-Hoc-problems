#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,k;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        int x = k/(n-1);
        if((k+x)%n == 0)
        {
            cout << k + x - 1 << endl;
        }
        else cout << k + x << endl;
    }
    return 0;
}
