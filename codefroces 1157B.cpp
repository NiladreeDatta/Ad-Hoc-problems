#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int a[10];
    for(int i = 1 ; i <= 9 ; i++) cin >> a[i];
    vector <int> dif;
    for(int i = 0 ; i < n ; i++)
    {
        dif.push_back(a[s[i]-'0'] - (s[i] - '0'));
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(dif[i] > 0)
        {
            while(i < n && dif[i] >= 0)
            {
                s[i] = char(a[ s[i] - '0' ] + '0' );
                i++;
            }
            break;
        }
    }
    cout << s << endl;
    return 0;
}
