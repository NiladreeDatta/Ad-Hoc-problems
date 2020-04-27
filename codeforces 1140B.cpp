#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    string s;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> s;
        int ans = INT_MAX;
        int a,b;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '>')
            {
                a = i;
                break;
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(s[n-i-1] == '<')
            {
                b = i;
                break;
            }
        }
        cout << min(a,b) << endl;
    }


    return 0;
}
