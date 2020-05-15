#include<bits/stdc++.h>
using namespace std;
int n;
string s,res;
int main()
{
    cin >> n >> s;
    for(int i = 0 ; i < n ; i++)
    {
        if(res.size()%2 == 0 || res.back() != s[i])
            res.push_back(s[i]);
    }
    if(res.size()%2 == 1) res.pop_back();
    cout << n - res.size() << endl;
    cout << res << endl;

    return 0;
}
