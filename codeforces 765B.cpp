#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char x = 'a';
    for(auto i:s)
    {
        if(i > x)
        {
            cout << "NO" << endl;
            return 0;
        }
        if(i == x) x++;
    }
    cout << "YES" << endl;


    return 0;
}
