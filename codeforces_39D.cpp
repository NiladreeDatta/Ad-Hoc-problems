#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f ;
    int x = abs(a-d)+abs(b-e)+abs(c-f);
    cout << (x == 3 ? "YES" : "NO") << endl;

    return 0;
}
