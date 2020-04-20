#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc;
    cin >> tc;
    while(tc--)
    {
        int k;
        cin >> n >> k;
        int a[n];
        for(int i = 0 ;  i< n ; i ++) cin >> a[i];
        int odd=0;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i]%2 == 1) odd++;
        }
        if(odd >= k && (odd-k+1)%2 == 1)
        {
            cout << "YES" << endl;
            int mark = 0;
            for(int i = 0 ;mark < k-1&& i < n ; i++)
            {
                if(a[i]%2 == 1)
                {
                    cout << i+1 << " ";
                    mark++;
                }
            }
            cout << n << endl;
        }
        else cout << "NO" << endl;
    }


    return 0;
}
