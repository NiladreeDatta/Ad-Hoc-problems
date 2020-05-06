#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,x,y;
    cin >> tc;
    while(tc--)
    {
        int m;
        cin >> m;
        int a = INT_MIN;
        int b = INT_MAX;
        while(m--){
        cin >> x >> y;
        a = max(a,x);
        b = min(b,y);
    }
    cout << max(0,a-b) << endl;
    }
    return 0;
}
