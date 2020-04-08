#include<bits/stdc++.h>
using namespace std;
int tc,n;
string s,t;
int main()
{
    cin >> tc;
    while(tc--)
    {
        cin >> n >> s >> t;
        vector <int> dif;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] != t[i])
                dif.push_back(i);
        }
        if(dif.empty() || ( dif.size() == 2 &&  s[dif[0]] == s[dif[1]] && t[dif[0]] == t[dif[1]] ))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
