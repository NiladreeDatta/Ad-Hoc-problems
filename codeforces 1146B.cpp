#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t,s1="",s2="";

    cin >> t;
    for(int i = 0 ; i < t.size() ; i++)
    {
        s1 += t[i];
        if(t[i] != 'a') s2 += t[i];


        if(s1.size()+s2.size() == t.size() && t == s1+s2)
        {
            cout << s1 << endl;
            return 0;
        }
    }
    cout << ":(" << endl;


    return 0;
}
