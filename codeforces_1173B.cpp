#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = (n/2)+1;
    cout << ans << endl;

    for(int i = 1 ; i <= ans ; i++)
    {
        cout << i << " " << 1 << endl;
    }
    int remain = n - ans;
    for(int i = 2 ; i <= remain + 1 ; i++)
    {
        cout << ans << " " << i << endl;
    }


    return 0;
}
