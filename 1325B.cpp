#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,x;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        set <int> s;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;


    }

    return 0;
}
