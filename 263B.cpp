#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    if(k > a[n-1])
    {
        cout << "-1" << endl;
        return 0;
    }
    cout << a[n-k] << " " << 0 << endl;


    return 0;
}
