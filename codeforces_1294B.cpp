#include<bits/stdc++.h>
using namespace std;
int t,n;
pair<int,int> a[10000];
string s;
void solve()
{
    s = "";
    cin >> n;
    for(int i = 1  ; i <= n ; i++) cin >> a[i].first >> a[i].second;
    sort(a+1,a+n+1);
    int nx=0,ny=0;
    for(int i = 1; i <= n ; i++)
    {
        if(nx > a[i].first || ny > a[i].second)
        {
            cout << "NO" << endl;
            return ;
        }
        for(int  j  = nx+1 ; j <= a[i].first ; j++)
        {
            s += "R";
            nx++;
        }
        for(int  j  = ny+1 ; j <= a[i].second ; j++)
        {
            s += "U";
            ny++;
        }
    }
    cout << "YES" << endl;
    cout << s << endl;
}
int main()
{
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
