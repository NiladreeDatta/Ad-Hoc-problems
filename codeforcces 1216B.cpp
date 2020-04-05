#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    int b[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i], b[i] = a[i];
    sort(b,b+n);
    reverse(b,b+n);
    int ans = 1;
    for(int i = 1 ; i < n ; i++)
    {
        ans += (i*b[i]) + 1;
    }
    cout << ans  << endl;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(b[i] == a[j])
            {
                a[j] = 0;
                cout << j+1 << " ";
                break;
            }
        }
    }



    return 0;
}
