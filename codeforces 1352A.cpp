
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        if(n >=1 and n <= 9)
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else if(n >= 10)
        {
            vector <int> v;
            int i = 1;
            while(n != 0)
            {
                //cout << (n%10)*1 << " ";
                v.push_back((n%10)*i);
                i *= 10;
                n /= 10;
            }
            int cnt = 0;
            for(int i =0  ; i < v.size() ; i++)
            {
                if(v[i] != 0) cnt++;
            }
            cout << cnt << endl;
            for(int i = 0 ; i < v.size() ; i++)
            {
                if(v[i] != 0)
                {
                    cout << v[i] << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
