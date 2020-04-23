#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    long long int ans = 0;
    string s;
    set <char> st;
    cin >> n >> k;
    cin >> s;
    for(int i = 0 ; i < k ; i++)
    {
        char c;
        cin >> c;
        st.insert(c);
    }
    for(int i = 0 ; i < n ; i++)
    {
        int j = i;
        while(j < n && st.count(s[j])) j++;
        int len = j-i;
        ans += len*1ll*(len+1)/2;
        i = j;
    }
    cout << ans << endl;

    return 0;
}
