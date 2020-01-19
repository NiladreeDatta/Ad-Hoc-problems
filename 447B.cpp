#include<bits/stdc++.h>
using namespace std;
long long k,w[27],i = 1 , mx, p, n ;
string s;
int main()
{
    cin >> s >> k;
    for(; i < 27 ; i++)
    {
        cin >> w[i] ;
        mx = max(mx,w[i]);
    }
    for( i = 0 ; i < s.length() ; i++)
    {
        n += w[s[i] - 96]*(i+1);
    }

    /*while(k--)
    {
        i++;
        p += mx*i;
    }*/
    for(int i = s.length() + 1 ; i <= s.length()+k ; i++)
    {
        p += mx*i;
    }
    cout << n + p << endl;

    return 0;
}
