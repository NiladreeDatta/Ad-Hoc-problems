#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        if(n - 3 <= 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if(n%2 == 0)
            {
                for(int i = 2 ; i <=n ; i+=2)
                {
                    cout << i << " ";
                }
                cout << n-3 << " " << n-1 << " ";
                for(int i = n - 5 ; i >= 1 ; i  -= 2)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else if(n %2 == 1)
            {
                for(int i = 1 ; i <= n ; i+=2)
                {
                    cout << i << " ";
                }
                cout << n-3 << " " << n-1 << " ";
                for(int i = n-5 ; i >= 1 ; i -= 2)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
