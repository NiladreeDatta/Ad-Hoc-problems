#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n+1];
    for(int i = 0 ;  i < n ; i++) cin >> a[i];
    int fact = 1;;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] % 2 == 0)
        {
            cout << a[i]/2 << " ";
        }
        else
        {
            cout << (a[i]+fact)/2 << " ";
            fact *= (-1);
        }
    }
    cout << endl;

    return 0;
}
