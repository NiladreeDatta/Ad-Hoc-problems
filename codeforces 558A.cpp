#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    pair <int,int> p[1000];
    cin >> n;
    int pos = 0, neg = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> p[i].first >> p[i].second;
        if(p[i].first < 0) neg++;
        else pos++;
    }
    long long ans = 0;
    sort(p,p+n);
    for(int i = max(0,neg-pos-1) ; i <= min(n,2*neg) ; i++)
        ans += p[i].second;

    cout << ans << endl;



    return 0;
}
