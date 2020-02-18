#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        if(i%4 == 0) cout << "a";
        if(i%4 == 1) cout << "b";
        if(i%4 == 2) cout << "c";
        if(i%4 == 3) cout << "d";
    }
    cout << endl;

    return 0;
}
