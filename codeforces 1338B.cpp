#include<bits/stdc++.h>
using namespace std;
int tc,n;
int main()
{
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        vector <int> a,b;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        stack <int> s;
        sort(a.begin(),a.end());
        for(int i = 0 ; i < n/2 ; i++)
        {
            int x = max(a[i],a[n-i-1]);
            int y = min(a[i],a[n-i-1]);

            s.push(x);
            s.push(y);
        }
        if(n%2 == 1)
        {
            cout << a[n/2] << " ";
            while(!s.empty())
            {
            cout << s.top() << " ";
            s.pop();
            }
            cout << endl;
        }
        else if(n%2 == 0)
        {
            while(!s.empty())
            {
            cout << s.top() << " ";
            s.pop();
            }
            cout << endl;
        }


    }
    return 0;
}
