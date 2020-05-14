#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long  n;
        cin >> n;
        long long x = n*(n+1)*(n-1)/3;
        cout << x << endl;
    }

    return 0;
}
