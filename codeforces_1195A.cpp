#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        if(n%2 == 1)
        {
            cout << "7";
            n -= 3;
        }
        for(int i = 0 ; i < n/2 ; i++)
        {
            cout << "1";
        }
        cout << endl;
    }

    return 0;
}
