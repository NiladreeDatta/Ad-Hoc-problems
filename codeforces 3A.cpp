#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max(abs(a-c),abs(b-d)) << endl;

    while(a != c || b != d)
    {
        if(c > a) cout << 'R',a++;
        if(c < a) cout << 'L',a--;
        if(b < d) cout << 'U',b++;
        if(b > d) cout << 'D',b--;
        cout << endl;
    }


    return 0;
}
