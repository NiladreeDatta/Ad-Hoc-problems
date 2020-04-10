#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,d=0;
    char s[300];
    cin >> n;
    cin >> s;
    sort(s,s+n);
    sort(s+n,s+2*n);
    for(int i = 0 ; i < n  ; i++)
    {
        if( s[i] < s[i+n] ) c++;
        else if(s[i] > s[i+n]) d++;
    }
    if(c==n || d == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
