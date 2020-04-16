#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n+1];
    for(long long int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    if(n == 1)
    {
        cout << a[0] << endl;
        return 0;
    }
    long long int sum = 0;
    for(long long int i = 0 ; i < n-1 ; i++)
    {
        sum += (i+2)*a[i];
    }
    sum += n*a[n-1];
    cout << sum << endl;

    return 0;
}
