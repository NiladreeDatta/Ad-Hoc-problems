#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int r,b,y,g;
    int a[4] = {0};
    cin >> s;
    //int b[200]= {0};
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '!')
            a[i%4]++;
        /*else
        {
            int val = s[i];
            b[val] = i%4;
        }*/
        else if(s[i] == 'R')
        {
            r = i%4;
        }
        else if(s[i] == 'B')
        {
            b = i%4;
        }
        else if(s[i] == 'Y')
        {
            y = i%4;
        }
        else if(s[i] == 'G')
        {
            g = i%4;
        }

    }
    //cout << a[b['R']] << " "<< a[b['B']] <<" " << a[b['Y']] <<" " << a[b['G']] << endl;
    cout << a[r] << " "<< a[b] <<" " << a[y] <<" " << a[g] << endl;
    return 0;
}
