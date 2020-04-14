#include<bits/stdc++.h>
using namespace std;
int a[130];
int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
        a[s[i]]++;
    }
    string m;
    for(int i = 64 ; i < 130 ; i++)
    {
        if(a[i]%k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
        else if(a[i] > 0 && a[i]%k == 0)
        {
            for(int j = 0 ; j < a[i]/k ; j++)
                m += i;
        }
    }
    for(int i = 0 ; i < k ; i++)
            cout << m ;
        cout << endl;

    return 0;
}
