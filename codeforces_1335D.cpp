#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string s;
    cin >> tc;
    while(tc--)
    {
        char a[9][9];

        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(a[i][j] == '1') a[i][j] = '2';
            }
        }

        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
