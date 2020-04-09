#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int a[n+10];
    for(int i =  0; i < n ; i++) cin >> a[i];
    for(int i = n ; i < n+5 ; i++) a[i] = 0;
    sort(a,a+n);
    if(k == 0)
    {
        if(a[0] == 1)
        {
            cout << -1 << endl;
        }
        else cout << a[0] - 1;
        return 0;
    }
    else if(a[k-1] == a[k])
    {
        cout << -1 << endl;
        return 0;
    }
    else
        cout << a[k-1] << endl;

    return 0;
}
