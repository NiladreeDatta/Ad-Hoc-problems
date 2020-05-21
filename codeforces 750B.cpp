#include<bits/stdc++.h>
using namespace std;
int n,a,c;
int main()
{
    char s[10];
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a >> s;
        if(s[0] == 'N') c -= a;
        if(s[0] == 'S') c += a;
        if(s[0] == 'E' || s[0] == 'W'){
            if(c == 0 || c == 20000) puts("NO"),exit(0);
            }
        if(c < 0 || c > 20000) puts("NO"),exit(0);
    }
    puts(c ? "NO" : "YES");
    return 0;
}
