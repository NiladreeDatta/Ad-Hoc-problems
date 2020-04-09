#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,n;
    cin >> b >> g>> n;
    pair <int,int> p;
    int x[n+1];
    int y[n+1];
    for(int i = 0 ; i <= n ;i++)
    {
        x[i] = i;
    }
    for(int i = 0 ; i <= n ;i++)
    {
        y[i] = n-i;
    }
    int count = 0;
    for(int i = 0 ; i <= n ;i++)
    {
        if(x[i] <= b && y[i] <= g) count++;
    }
    cout << count << endl;

    return 0;
}
