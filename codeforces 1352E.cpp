#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int a[n+1];
        int cnt[n+1] = {0};
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int c = 0;
        for(int i = 1 ; i <= n; i ++)
        {
            int sum = 0;
            for(int j = i ; j <= n ; j++)
            {
                sum += a[j];
                if(i == j) continue;
                if(sum <= n)
                {
                    c += cnt[sum];
                    cnt[sum] = 0;
                }
            }
        }
        cout << c << endl;
    }


    return 0;
}
