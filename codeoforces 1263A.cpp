#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(a[0]+a[1] <= a[2])
        {
            cout << a[0]+a[1] << endl;
        }
        else cout << (a[0]+a[1]+a[2])/2 << endl;
    }


    return 0;
}
