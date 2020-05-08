#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,t;
    cin >> n;
    t = n;
    while(n--)
    {
        int m;
        cin >> m;
        a[m] = 1;
        while(a[t])
        {
            cout << t << " ";
            t--;
        }
        puts("");


    }

    return 0;
}
