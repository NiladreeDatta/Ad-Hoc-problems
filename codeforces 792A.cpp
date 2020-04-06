#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    int mn = INT_MAX;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        mn = min(abs(a[i] - a[i+1]),mn);
    }
    //cout << mn << endl;
    for(int i = 0 ; i < n ; i++)
    {
        if(abs(a[i] - a[i+1]) == mn) count ++;
    }
    cout << mn << " " << count;

    return 0;
}
