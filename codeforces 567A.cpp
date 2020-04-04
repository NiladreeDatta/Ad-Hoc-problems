#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int  i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    if(n == 2)
    {
        int x = abs(a[0]-a[1]);
        cout << x << " " << x << endl;
        cout << x << " " << x << endl;
        return 0;
    }
    else if(n > 2)
    {
        cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n-1]) << endl;
        for(int i = 1 ; i < n-1 ; i++)
        {
            cout << min(abs(a[i] - a[i-1]),abs(a[i] - a[i+1])) << " " << max(abs(a[i] - a[0]),abs(a[i] - a[n-1])) << endl;

        }
        cout << abs(a[n - 1] - a[n-2]) << " " << abs(a[n-1]-a[0]) << endl;


    }

    return 0;
}
