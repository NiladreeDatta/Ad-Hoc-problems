#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN;
    vector <int> a;
    //int a[n+1];
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        mx = max(mx,x);
    }
    if(mx == 1)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 1)
            {
                a[i] = 2;
                break;
            }
        }
        sort(a.begin(),a.end());
        for(int i = 0 ; i < n ; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    else if(mx != 1)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == mx)
            {
                a[i] = 1;
                break;
            }
        }
        sort(a.begin(),a.end());
        for(int i = 0 ; i < n ; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
