#include<bits/stdc++.h>
using namespace std;
int k[1002];
int main()
{
    int n,m;
    cin >> n >> m;
    int k[m+1]={0};
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        k[x]++;
    }
    int count = 0;
    for(int i = 1 ; i <= m ; i++)
    {
        if(k[i] % 2 == 1)
            count++;
    }
    cout << n - (count/2) << endl;

    return 0;
}
