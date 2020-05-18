#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,c,d;
    cin >> a >> b >> c >> d;
    if(log(a)*b > log(c)*d)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}
