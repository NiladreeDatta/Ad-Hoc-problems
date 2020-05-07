#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string s;
    cin >> tc;
    while(tc--)
    {
        cin >> s;
        int ans  = 0;
        map < pair<int,int>,int > m;
        int x = 0;
        int y = 0;
        for(int i = 0 ; i < s.size() ; i++)
        {
            int a,b;
            a = x , b = y;
            if(s[i] == 'N') y++;
            if(s[i] == 'S') y--;
            if(s[i] == 'E') x++;
            if(s[i] == 'W') x--;

                if(m[{a+x,b+y}] == 1)
                {
                    ans += 1;
                }
                else
                {
                    ans += 5;
                    m[{a+x,b+y}] = 1;
                }
        }
        cout << ans << endl;

    }


    return 0;
}
