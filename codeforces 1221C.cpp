#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c,m,x;
    cin >> tc;
    while(tc--)
    {
        cin >> c >> m >> x;
        cout << min(c,min(m,(c+m+x)/3)) << endl;
    }



    return 0;
}
