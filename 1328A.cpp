#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b;
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b;
        if(a%b == 0)
        {
            cout << "0"<< endl;

        }
        else
        {
            cout << b - (a%b) << endl;
        }

    }


    return 0;
}
