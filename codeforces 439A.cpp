#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin >> n >>d;
    int a[n+1];
    long long int sum = 0;
    for(int i =0  ; i < n ; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum + (n-1)*10 <= d)
    {
        long long int x = sum + (n-1)*10;
        long long int y = (n-1)*2;
        long long int z = (d-x)/5;
        cout << y + z << endl;
    }
    else cout << -1 << endl;


    return 0;
}
