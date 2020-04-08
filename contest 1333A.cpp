#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int main()
{
    int tc,n,m;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        int x = (n*m);
        if( x % 2 != 0)
        {
            for(int i = 1 ; i <= n ; i++)
            {
                for(int j = 1; j <= m ; j++)
                {
                    if((i+j)%2 == 0)
                    {
                        cout << "B";
                    }
                    else
                        cout << "W";
                }
                cout << endl;
            }

        }
        else if(x%2 == 0)
        {
            cout << "BB";
            for(int i = 2 ; i < m ;i++)
                if(i%2 == 0) cout << "B";
                else cout << "W";
            cout << endl;
            for(int i = 2 ; i <= n ; i++)
            {
                for(int j = 1; j <= m ; j++)
                {
                    if((i+j)%2 == 0)
                    {
                        cout << "B";
                    }
                    else
                        cout << "W";
                }
                cout << endl;
            }

        }
    }

    return 0;
}
