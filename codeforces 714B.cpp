#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    n = unique(a,a+n) - a;
    if(n <= 2 || (n == 3 &&  a[0]+a[2] == 2*a[1]))
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
