#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,m=1,x,a[101];
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        memset(a,0,sizeof a);
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                cin >> x;
                a[x]++;
            }
        }
        bool ans = true;
        for(int i = 0 ; i <= 100 ; i++)
        {
            if(a[i] > n)
            {
                ans = false;
                break;
            }
        }
        if(ans == true)
        {
            printf("Case %d: yes\n",m++);
        }
        else
            printf("Case %d: no\n",m++);



    }

    return 0;
}
