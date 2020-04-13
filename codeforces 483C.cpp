#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    for(int i = 1 ; i <= n-k-1 ; i++)
        cout << i << " ";
    int l,r;
    for(l = n-k , r = n ; l < r ; ++l,--r)
    {
        cout << l << " " << r << " " ;
    }
        if(l == r)
            cout << l << " ";

    return 0;
}
