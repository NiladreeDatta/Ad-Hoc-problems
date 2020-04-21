#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector <int> a(4*n);
        for(int i = 0 ; i < 4*n ; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int area = a[0]*a.back();
        bool ok = true;
        for(int i = 0 ; i < n  ;i++)
        {
            int l = 2*i;
            int r = 4*n - (2*i) - 1;
            if(a[l] != a[l+1] || a[r] != a[r-1] || a[l]*1ll*a[r] != area)
            {
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }


    return 0;
}
