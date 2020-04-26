#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0,c=0,r=0;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i] , mx = max(mx,a[i]);
    int len = 0;
    for(int i =0 ; i < n ; i++)
    {
        if(a[i] == mx) c++;
        else
        {
            len = max(len,c);
            c = 0;
        }
    }
    cout << max(len,c) << endl;

    return 0;
}
