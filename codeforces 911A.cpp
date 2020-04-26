#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mn = INT_MAX;
    cin >> n;
    int a[n+1];
    vector <int> v;
    for(int i = 0 ; i < n ; i++) cin >> a[i],mn = min(mn,a[i]);

    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == mn)
        {
            v.push_back(i+1);
        }
    }
    //for(int i = 0 ; i < v.size() ; i++) cout << v[i] << " ";
    int ans = INT_MAX;
    for(int i = 1 ; i < (int)v.size(); i++)
    {
        ans = min(ans,v[i]-v[i-1]);
    }
    cout << ans << endl;


    return 0;
}
