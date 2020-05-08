#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2 == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        for(int i = 1 ; i <= 2*n ; i++)
        {
            if(i<=n)
            {
                cout << 2*i - (i%2) << " ";
            }
            else
            {
                cout << 2*(i-n) - (i%2) << " ";
            }
        }
        cout << endl;
    }


    return 0;
}
