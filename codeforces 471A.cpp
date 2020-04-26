#include<bits/stdc++.h>
using namespace std;

int x[10];

int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    x[a]++;
    x[b]++;
    x[c]++;
    x[d]++;
    x[e]++;
    x[f]++;

    bool leg = false;
    for(int i =0 ; i < 10 ; i++)
    {
        if(x[i] == 4) leg = true;
    }
    if(leg)
    {
        for(int i = 0 ; i < 10 ; i++)
        {
            if(x[i] == 2)
            {
                cout << "Elephant" << endl;
                return 0;
            }
        }
        cout << "Bear" << endl;
        return 0;

    }
    cout << "Alien" << endl;

    return 0;
}
