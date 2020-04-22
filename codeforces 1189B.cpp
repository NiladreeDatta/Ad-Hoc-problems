#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+7];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    if(a[0]+a[n-2] <= a[n-1])
    {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i = 0 ; i < n ; i++)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;


    return 0;
}
