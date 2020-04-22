#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int x = n/2;
        long long int even = 0;
        if(x%2 == 1)
        {
            cout << "NO" << endl;
        }
        else if(x%2 == 0)
        {
            cout << "YES" << endl;
            for(int i = 2; i <= n ; i+=2)
            {
                cout << i << " ";
                even += i;
            }
            long long int y = 1;
            for(int i = 1 ; i <= (n/2) - 1; i++)
            {
                cout << y << " ";
                even -= y;
                y += 2;
            }
            cout <<even << endl;
        }
    }

    return 0;
}
