#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ind = -1;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if((s[i])%2 == 0)
        {
            ind = i;
            if(s[i] < s[ s.size() - 1 ])
            {
                break;
            }
        }
    }
    if(ind != -1)
    {
        swap(s[ind],s[s.size()-1]);
        cout << s << endl;
    }
    else cout << -1 << endl;

    return 0;
}
