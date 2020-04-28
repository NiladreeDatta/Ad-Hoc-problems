#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c1 = (n-11)/2;
    int c2 = (n-11)/2;
    string res = "";
    for(int i = 0; i < n ; i++)
    {
        if(s[i] == '8')
        {
            if(c1 > 0)
            {
                c1--;
            }
            else res += s[i];
        }
        else
        {
            if(c2 > 0)
            {
                c2--;
            }
            else res += s[i];
        }
    }
    if(res[0] == '8') cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
