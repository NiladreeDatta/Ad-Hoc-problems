#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,x=0,y=0,c=0;
    cin >> tc;
    while(tc--)
    {
        cin >> a >> b;
        x += a;
        y += b;
        c += (a%2 != b%2);
    }
    if(x%2 == 0 and y %2 == 0)
    {
        cout << 0 << endl;
    }
    else if(c > 0 and c%2 == 0)
    {
        cout << 1 << endl;
    }
    else cout << -1 << endl;

    return 0;
}
