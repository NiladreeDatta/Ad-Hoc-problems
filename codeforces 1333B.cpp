#include<bits/stdc++.h>
using namespace std;
int a[100000];
int b[100000];
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(int i = 0 ; i < n ; i++) cin >> b[i];
        if(a[0] != b[0])
        {
            cout << "NO" << endl;
        }
        else if(a[0] == b[0])
        {
            int one=0,mins = 0,last = 0;
            if(a[0] == 1) one = 1;
            if(a[0] == -1) mins = 1;

            for(int i = 1 ; i < n ; i++)
            {
                if(a[i] > b[i] && mins == 0)
                {
                    cout << "NO" << endl;
                    last = 1;
                    break;
                }
                else if(a[i] < b[i] && one == 0)
                {
                    cout << "NO" << endl;
                    last = 1;
                    break;
                }
                else if(a[i] == 1 ) one = 1;
                else if(a[i] == -1 ) mins = 1;

            }
            if(last == 0)
            {
                cout << "YES" << endl;
            }
        }


    }

    return 0;
}
