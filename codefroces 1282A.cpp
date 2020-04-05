#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n % 2 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << long(pow(2,n/2)) << endl;
    }



    return 0;
}
