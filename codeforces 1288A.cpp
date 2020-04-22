#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,d;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> d;
        if(2*sqrt(d)-1 <= n)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }

    return 0;
}
