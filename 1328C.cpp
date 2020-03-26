#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,p;
    string x,a,b;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        cin >> x;
        p = 0;
        a = "";
        b = "";
        for(int i = 0 ; i < n ; i++)
        {
            if(x[i] == '0')
            {
                a += '0';
                b += '0';
            }
            else if(x[i] == '1')
            {
                if(p == 0)
                {
                    a += '1';
                    b += '0';
                    p = 1;
                }
                else
                {
                    a += '0';
                    b += '1';
                }
            }
            else if(x[i] == '2')
            {
                if(p == 0)
                {
                    a += '1';
                    b += '1';
                }
                else
                {
                    a += '0';
                    b += '2';
                }
            }
        }
        cout << a << endl;
        cout << b << endl;

    }


    return 0;
}
