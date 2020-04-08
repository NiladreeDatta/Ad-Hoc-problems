#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int> a;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    int x = *prev(a.end());

    for(int i =  1 ; i <= x ; i++)
    {
        if(x%i == 0)
        {
            a.erase(a.find(i));
        }
    }
    int y = *prev(a.end());
    cout << x << " " << y << endl;
    return 0;
}
