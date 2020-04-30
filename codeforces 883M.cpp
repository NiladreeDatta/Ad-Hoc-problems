#include<bits/stdc++.h>
using namespace std;
int b[5005];
int mx,n,ans;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x =  2 * max( 2 , abs( a - c ) + 1 );
    int y =  2 * max( 2 , abs( b - d ) + 1 );
    cout << x  +  y << endl;
    return 0;
}

