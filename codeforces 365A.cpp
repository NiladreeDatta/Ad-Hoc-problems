#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int ans = 0;
    while(n--)
    {
        int a;
        cin >> a;

        set<int> s;

        while(a)
        {
            //int x = a%10;
            if(a%10 <= k)
            {
                s.insert(a%10);
                //a /= 10;
            }
            a /= 10;
        }
        if(s.size() == k+1) ans++;
    }
    cout << ans << endl;

    return 0;
}
