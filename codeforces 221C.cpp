#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count = 0;
    cin >> n;
    int x;
    int a[n+1];
    int b[n+1];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] != b[i]) count++;
    }
    if(count == 2 || count == 0)
        cout << "YES";
    else
        cout << "NO" << endl;

    return 0;
}
