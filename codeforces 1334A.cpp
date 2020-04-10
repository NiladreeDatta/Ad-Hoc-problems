#include<bits/stdc++.h>
using namespace std;
int a[102];
int b[102];
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int x,y;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x >> y;
            a[i] = x;
            b[i] = y;
        }
        int count = 0;
        if(a[0] < b[0])
        {
            cout << "NO" << endl;
            count = 1;
        }
        else
        {
            for(int i = 1 ; i < n ;i++)
            {
            if(a[i] >= b[i]){
            if(a[i] < a[i-1] || b[i] < b[i-1])
            {
                cout << "NO" << endl;
                count = 1;
                break;
            }
            else if(a[i] == a[i-1] && b[i] > b[i-1])
            {
                cout << "NO" << endl;
                count = 1;
                break;
            }
            }
            else if(b[i] > a[i])
            {
                cout << "NO" << endl;
                count = 1;
                break;
            }
            }
        }

        if(count == 0)
        {
            cout << "YES" << endl;
        }

    }


    return 0;
}
