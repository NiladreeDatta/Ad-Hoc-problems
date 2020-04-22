#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    if(n == 2)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    if(n == 3)
    {
        cout << 2<< endl;
        cout << 1 << " " << 3 << endl;
    }
    if(n>3)
    {
        if(n%2 == 0)
    {
        cout << n << endl;
        for(int i = n-1 ; i >= 1 ; i--)
        {
            if(i%2 == 1)
            {
                cout << i << " ";
            }
        }
        for(int i = n ; i >= 1 ; i--)
        {
            if(i%2 == 0)
            {
                cout << i << " ";
            }
        }
    }
    else if(n%2 == 1)
    {
        cout << n << endl;
        for(int i = n ; i >= 1 ; i--)
        {
            if(i%2 == 1)
            {
                cout << i << " ";
            }
        }
        for(int i = n-1 ; i >= 1 ; i--)
        {
            if(i%2 == 0)
            {
                cout << i << " ";
            }
        }
    }
    }


    return 0;
}
