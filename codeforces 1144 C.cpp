#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> cnt(200*1000+2);

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
        if(cnt[x] > 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    cout << count(cnt.begin(),cnt.end(),2) << endl;
    for(int i = 0  ; i <= 200000 ; i++)
    {
        if(cnt[i] == 2)
        {
            cout << i << " ";
            cnt[i]--;
        }
    }
    cout << endl;
    cout << count(cnt.begin(),cnt.end(),1) << endl;
    for(int i = 200000 ;i >= 0 ; i--)
    {
        if(cnt[i] == 1)
        {
            cout << i << " ";
            //cnt[i]--;
        }
    }
    cout << endl;
    return 0;
}
