#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    long long sum =0 ;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
        if(sum <= 0) return 0;
    }
    sum = 0;
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        sum += a[i];
        if(sum <= 0) return 0;
    }
    return 1;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        if(solve())
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}
