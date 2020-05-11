#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s;
    cin >> s >> k;
    int len = s.size() / k;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if((s.size()%k) || s[i] != s[(i/len)*len + len - 1 - (i%len)])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
