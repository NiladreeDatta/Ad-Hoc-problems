#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,n,a,b,c,d;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> a >> b >> c >> d;
        long long int x,y,z;
        y = c+d;
        x = c-d;
        bool ok = false;
        for(int i = a-b ; i <= a+b ; i++)
        {
            if(i*n <= y && i*n >= x)
                ok = true;
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}
