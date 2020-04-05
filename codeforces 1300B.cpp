#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int m = 2*n;
        int a[m+1];
        for(int i = 0 ; i < m ; i ++) cin >> a[i];
        sort(a,a+m);
        int x = m/2;
        int y = (m/2) - 1;
        cout << abs(a[x] - a[y]) << endl;
    }

    return 0;
}
