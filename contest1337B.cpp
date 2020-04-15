#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,m,n;
    cin >> tc;
    while(tc--)
    {
        cin >> x >> n >> m;
       for(int i = 0 ; i < n ; i++)
       {
           if(x > 20)
           {
               x = (x/2)+10;
           }
           else break;
       }
       for(int i = 0 ; i < m ; i++)
       {
           x -= 10;
       }
       if(x <= 0)
       {
           cout << "YES" << endl;
       }
       else
       {
           cout << "NO" << endl;
       }
    }


    return 0;
}

