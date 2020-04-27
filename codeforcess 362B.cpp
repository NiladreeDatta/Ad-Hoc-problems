#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[m + 1];
    for(int i = 1 ; i <= m ; i++) cin >> a[i];
    sort(a+1,a+m+1);
    if(a[1] == 1 || a[m] == n)
    {
        cout << "NO" << endl;
        return 0;
     }

    for(int i = 1 ; i <= m ; i++)
    {
        if(a[i+1] == a[i]+1 && a[i+2] == a[i]+2)
        {
            cout << "NO" << endl;
            return 0;
        }

    }
    cout << "YES" << endl;
    return 0;
}
