#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int k;
    cin >> a >> b;
    k = b.size()-1;
    sort(b.begin(),b.end());

    for(int i = 0 ; i < a.size() ; i++)
    {
        if(a[i] < b[k])
        {
            a[i] = b[k];
            k--;
        }
    }
    cout << a  << endl;


    return 0;
}
