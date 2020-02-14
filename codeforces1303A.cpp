#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    int ans;
    cin >> n;
    while(n--)
    {
        cin >> s;
        int first = s.find('1');
        int last = s.rfind('1');
        ans  = 0;

        for(int i = first ; i <= last ; i++)
        {
            if(s[i] == '0') ans++;
        }
        cout << ans << endl;

    }

    return 0;
}
