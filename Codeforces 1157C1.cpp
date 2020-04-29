#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    string res = "";
    int l = 0 , r = n - 1 , lst = 0 ;
    while(l <= r)
    {
        vector < pair < int , char> > cur;
        if(lst < a[l]) cur.push_back(make_pair(a[l],'L'));
        if(lst < a[r]) cur.push_back(make_pair(a[r],'R'));
        sort(cur.begin(),cur.end());
        if(cur.size() == 2)
        {
            cur.pop_back();
        }
        if(cur.size() == 1)
        {
            if(cur[0].second == 'L')
            {
                res += 'L';
                lst = a[l];
                l++;
            }
            else
            {
                res += 'R';
                lst = a[r];
                r--;
            }
        }
        else
        {
            break;
        }
    }
    cout << res.size() << endl << res << endl;

    return 0;
}
