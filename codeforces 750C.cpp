#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx = 1e9 , mn = -1e9,inf = 1;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        int div,cng;
        cin >> cng >> div;
        if(div == 1 and mn < 1900) mn = 1900;
        if(div == 2 and mx > 1899) mx = 1899 , inf = 0;
        mx += cng;
        mn += cng;
        //cout << mn << " " << mx << endl;
    }
    if(inf) cout << "Infinity" << endl;
    else if(mx  < mn) cout << "Impossible" << endl;
    else cout << mx << endl;
    return 0;
}
