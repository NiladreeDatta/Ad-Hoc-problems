#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,c=0;
    cin >> n;
    while(1)
    {
        n = n+1;
        ans++;
        int k = n;
        while(k!= 0)
        {
            if(k%10 == 8 || k%10== -8) c = 1;

            k /= 10;
        }
        if(c) break;
    }
    cout << ans << endl;

    return 0;
}
