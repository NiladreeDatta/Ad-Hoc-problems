#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int a[n+2];
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        int x = -1,y = n-1;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] >= i) x = i;
            else break;
        }
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(a[i] >= (n-1) - i) y = i;
            else break;
        }
        if(y <= x)
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;

    }

    return 0;
}
