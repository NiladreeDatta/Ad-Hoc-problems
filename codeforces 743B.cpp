#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,k;
    cin >> n >> k;
    int ans = 1;
    while(k%2 == 0)
    {
        ans++;
        k /= 2;
    }
    cout << ans  << endl;


    return 0;
}
