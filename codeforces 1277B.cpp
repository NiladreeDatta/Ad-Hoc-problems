#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int x;
        set <int > s;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x;
            s.insert(x);
        }
        int ans  = 0;
        while(!s.empty())
        {
            int m = *s.rbegin();
            s.erase(m);
            if(m%2 == 0)
            {
                ans ++;
                s.insert(m/2);
            }
        }
        cout << ans << endl;
    }


    return 0;
}
