#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    set <int> s,t;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int i = 1 ; i <= m && m ; i++)
    {
        if(!s.count(i))
        {
            t.insert(i);
            m -= i;
        }
    }
    cout << t.size() << endl;
    for(int i:t)
        cout << i << " ";
    cout << endl;

    return 0;
}
