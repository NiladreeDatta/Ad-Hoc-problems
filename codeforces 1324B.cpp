#include<bits/stdc++.h>
using namespace std;
int a[5005];
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;

        for(int i = 0 ; i < n ; i++) cin >> a[i];
        int count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+2 ; j < n ; j++)
            {
                if(a[i] == a[j])
                {
                    //cout << "YES" << endl;
                    count = 1;
                    break;
                }
            }
        }
        if(count == 0)
        {
            cout << "NO" << endl;
        }
        else if(count == 1)
        {
            cout << "YES" << endl;
        }

    }
    return 0;
}
