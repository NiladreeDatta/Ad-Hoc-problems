#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,a,b;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> a >> b;
        int group = n/b;
        for(int i = 0 ; i < group ; i++)
        {
            char a = 'a';
            for(int i = 0 ; i < b ; i++)
            {
                cout << a;
                a = a+1;
            }
        }
        char z = 'a';
        int m = n%b;

        for(int i = 0 ; i < m ; i++)
        {
            cout << z ;
            z = z+1;
        }
        cout << endl;


    }


    return 0;
}
