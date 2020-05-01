#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        set <int > s;
        for(int i = 1 ; i <= n ; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        if(s.size() > k)
        {
            cout << -1 << endl;
        }
        else
        {
            for(int i = 1 ; s.size() < k ; i++)
                s.insert(i);

            cout << n*k << endl;
            for(int i = 1 ; i <= n ; i++)
            {
                for(int x : s)
                    cout << x << " ";
            }
            cout << endl;
        }
    }


    return 0;
}
