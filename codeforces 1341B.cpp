#include<bits/stdc++.h>
using namespace std;
int a[200005],s[200005];
int main()
{
    int tc,n,k;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> k;
        //int a[n+2],s[n+2];
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        for(int i = 2 ; i <= n - 1 ; i++) s[i] = (a[i] > a[i-1] and a[i] > a[i+1]);
        for(int i = 1 ; i <= n ; i ++) s[i] += s[i-1];
        int mx= -1,id=0;
        for(int i = 1 , j = k ; j <= n ; i++,j++)
        {
            if(s[j-1] - s[i] > mx)
            {
                mx = s[j-1] - s[i];
                id = i;
            }
        }

        cout << mx+1 << " " << id << endl;

    }

    return 0;
}
