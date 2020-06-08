#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mx = 2e5 + 10;
map <int,int> offset;
int a[mx],b[mx],pos[mx];
int main()
{
    IOS;
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    for(int i = 1 ; i <= n ; i++) cin >> b[i];
    for(int i = 1 ; i <= n ; i++)
    {
        int cur = pos[b[i]] - i;
        if(cur < 0) cur += n;
        offset[cur]++;
    }
    int ans = 0;
    for(auto &it : offset)
    {
        ans = max(ans,it.second);
    }
    cout << ans << endl;
    return 0;
}
