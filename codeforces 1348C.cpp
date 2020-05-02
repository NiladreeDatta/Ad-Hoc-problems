#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int n,k;
    string s;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        cin >> s;
        sort(s.begin(),s.end());
        if(s[0] != s[k-1])
        {
            cout << s[k-1] << endl;
        }
        else
        {
            cout << s[0];
            if(s[k] != s[n-1])
            {
                for(int i = k ;  i < n ; i++)
                    cout << s[i];
            }
            else
            {
                for(int i = 0 ; i < (n-1)/k ; i++)
                    cout << s[n-1];

            }
            cout << endl;
        }
        //cout << endl;
    }


    return 0;
}
