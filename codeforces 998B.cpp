#include<bits/stdc++.h>
using namespace std;
int n,b,i,c,a[105],g[102],k;
int main()
{
    cin >> n >> b;
    vector <int> vc;
    for(i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    for(i = 1 ; i < n ; i++)
    {
        if(a[i]%2 == 0) c++; else c--;
        if(c == 0)
            //vc.push_back(abs(a[i]-a[i+1]));
            g[k++] = abs(a[i+1]-a[i]);
    }
    sort(g,g+k);

    //for(i = 0 ; i < k and  b >= g[i] ; i++)
    //    b -= vc[i];
    int count = 0 ;
    for(int i = 0 ; i < k ; i++)
    {
        if(b >= g[i])
        {
            count++;
            b -= g[i];
        }
    }
    cout << count << endl;

    return 0;
}
