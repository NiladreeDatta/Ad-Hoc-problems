#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    string s;
    cin >> n >> x >> y;
    cin >> s;
    int ans = 0;
    for(int i = n-x ; i < n ; i++)
    {
        if(i == n-y-1) ans += s[i]!='1';
        else ans += s[i] == '1';
    }
    cout << ans << endl;

    return 0;
}
