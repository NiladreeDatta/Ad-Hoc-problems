#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int tc;
    string s;
    cin >> tc;
    while(tc--)
    {
        cin >> s;
        bool ok = true;
        for(int i = 1 ; i < s.size() ; i++)
        {
            if(s[0] != s[i]) ok = false;
        }
        if(ok)
        {
            cout << s << endl;
        }
        else
        {
            for(int i = 0 ; i < s.size() ; i++)
            {
                cout << "01";
            }
            cout << endl;
        }
    }


    return 0;
}
