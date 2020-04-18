#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    for(int i = 1 ; i < n ; i++)
    {
        n -= i;
    }
    cout << n << endl;

    return 0;
}
