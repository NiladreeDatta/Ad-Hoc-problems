#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,k,tc,a;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> s >> k;
        map<int , int> m;
        int ans = 0;
        for(int i = 1 ; i <= k ; i++)
        {
            cin >> a;
            m[a] = 1;
        }
        while(1)
        {
            if(m[s - ans] == 0 && s - ans > 0)
            {
                cout << ans << endl;
                break;
            }
            if(m[s + ans] == 0 && s + ans <= n)
            {
                cout << ans << endl;
                break;
            }
            ans++;
        }

    }


    return 0;
}
