#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        int h,m;
        cin >> h >> m;
        int x = h*100 + m;
        a[x]++;
    }
    int mx = INT_MIN;
    for(int i = 0 ; i  < 100000 ; i++)
    {
        mx = max(mx,a[i]);
    }
    cout << mx << endl;

    return 0;
}
