#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,m;
        string s;
        cin >> n >> m >> s;
        vector <int> pre(n);
        for(int i = 0 ; i < m ; i++)
        {
            int x;
            cin >> x;
            pre[x-1]++;
        }
        for(int i = n - 1 ; i > 0 ; i--)
        {
            pre[i-1] += pre[i];/*protita position
            atleast kotobar ashbe*/
        }
        vector <int> ans(26);
        for(int i = 0 ; i < n ;i++)
        {
            ans[s[i] - 'a'] += pre[i]+1;
            //ans[s[i] - 'a']++;
        }
        for(int i = 0 ; i < 26 ; i++) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}
