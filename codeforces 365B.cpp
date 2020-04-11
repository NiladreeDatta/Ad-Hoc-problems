#include<bits/stdc++.h>
using namespace std;

int t,d,n,i,j,a[100005];
int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n ; i++)
    {
        if(i < 2 || a[i] == a[i-1]+a[i-2])
            d++;
        else
            d=2;
        t = max(t,d);
    }
    cout << t << endl;

    return 0;
}
