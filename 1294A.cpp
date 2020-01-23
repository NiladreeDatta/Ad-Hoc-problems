#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,tc;
    cin >> tc;
    while(tc--){
    cin >> a >> b >> c >> n;
    int mx  = max(a,max(b,c));
    int remain = abs(mx - a) + abs(mx - b) + abs(mx - c);
    int x = n-remain;
    if(x < 0)
    {
        cout << "NO" << endl;
    }
    else if(x == 0 || x % 3 == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    }
    return 0;
}
