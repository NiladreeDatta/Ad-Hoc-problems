#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bitset <6> b(n);

    int t = b[0];
    b[0] = b[4];
    b[4] = t;

    int x = b[2];
    b[2] = b[3];
    b[3] = x;

    cout << b.to_ulong() << endl;



    return 0;
}
