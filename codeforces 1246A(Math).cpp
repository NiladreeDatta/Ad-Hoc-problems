#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,a,b,n,s;
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b >> n >> s;

        if(a*n+b < s)
        {
            cout << "NO" << endl;
        }
        else if(a*n+b >= s)
        {
            if(s%n == 0)
            {
                cout << "YES" << endl;
            }
            else if(s%n != 0)
            {
                if(s%n <= b)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }


    return 0;
}
