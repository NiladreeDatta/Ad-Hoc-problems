#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        if(x == 100) a++;//100++
        else b++;//200++
    }
    if((a%2 == 1) || (a == 0 && b % 2 == 1))
    {
        cout << "NO" << endl;
        return 0;
    }
    else cout << "YES" <<endl;

    return 0;
}
