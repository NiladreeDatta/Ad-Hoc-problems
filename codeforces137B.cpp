#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    set <int> s;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a;
        if(a <= n) s.insert(a);
    }
    int x = s.size();
    cout << n - x << endl;


    return 0;
}

