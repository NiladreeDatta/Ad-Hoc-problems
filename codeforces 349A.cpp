#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int pochish=0;
    int ponchash=0;

    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == 25) pochish++;
        if(a[i] == 50)
        {
            ponchash++;
            pochish--;
        }
        if(a[i] == 100)
        {
            if(ponchash >= 1)
            {
                ponchash--;
                pochish--;
            }
            else if(ponchash == 0)
            {
                pochish -= 3;
            }
        }
        if(pochish < 0 || ponchash < 0)
            cout << "NO" << endl;

    }
    cout << "YES" << endl;

    return 0;
}
