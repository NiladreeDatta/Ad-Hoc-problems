#include<bits/stdc++.h>
using namespace std;
int c[100005],a,n,t[100005];
int main()
{
    cin >> n;
    for(int i = 0 ;  i< n ; i ++)
    {
        cin >> a >> c[i];
        t[a]++;
    }
    for(int i = 0 ;  i< n ; i++)
    {
        cout << n - 1 + t[c[i]] << " " << n - 1 - t[c[i]] << endl;
    }


    return 0;
}
