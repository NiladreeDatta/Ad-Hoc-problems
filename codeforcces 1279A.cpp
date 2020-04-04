#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a[3];
    cin >> tc;
    while(tc--)
    {
        cin >> a[0] >> a[1] >> a[2] ;
        sort(a,a+3);
        if(a[2]-1 > a[0] + a[1])
        {
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }


    return 0;
}
