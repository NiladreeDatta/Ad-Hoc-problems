#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[30000] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        a[x] = 1;
    }
    int m = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        if(a[i] == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n + 1 << endl;
    return 0;
}
