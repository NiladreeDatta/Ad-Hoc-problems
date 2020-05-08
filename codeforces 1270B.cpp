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
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0  ; i < n ; i++)
        {
            cin >> a[i];
            //mx = max(mx,a[i]);
            //mn = min(mn,a[i]);
        }
        //sort(a,a+n);
        int x = 0;
        for(int i = 0 ; i < n - 1; i++)
        {
            if(abs(a[i+1] - a[i]) >= 2)
            {
                cout << "YES" << endl;
                cout << i+1 << " " << i + 2<< endl;
                x = 1;
                break;
            }
        }
        if(x == 0)
        {
            cout << "NO" << endl;
        }
    }


    return 0;
}
