#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,c,ans;
    cin >> tc;
    while(tc--)
    {
        int s,i,ex;
        cin >> s >> i >> ex;
        int m = max(0,(ex+i-s+2)/2);
        cout << max(0,ex-m+1) << endl;
    }

    return 0;
}
