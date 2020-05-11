#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a,b,c;/* 0 1 2 */
        cin >> a >> b >> c;
        if(b == 0)
        {
            if(c == 0)
            {
                cout << string( a + 1 , '0' ) << endl;;
            }
            else if(a == 0)
            {
                cout << string(c + 1 , '1' ) << endl;
            }
            //continue;
        }
        if(b > 0)
        {
            string s = "";
            for(int i = 1 ; i <= b+1 ; i++)
            {
                if(i%2 == 1)
                {
                    s += '1';
                }
                else if(i%2 == 0)
                {
                    s += '0';
                }
            }
            s.insert(1, string( a , '0' ));
            s.insert(0, string( c , '1' ));
            cout << s << endl;
        }
    }


    return 0;
}
