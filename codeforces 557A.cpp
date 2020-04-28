#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a,b,c,d,e,f,x,y;
    cin >> a >> b >> c >> d >> e >> f;
    x = min(b,n-c-e);
    y = min(d,n-x-e);
    int z = n-x-y;
    cout << x << " " << y << " " << z << endl;

    return 0;
}
