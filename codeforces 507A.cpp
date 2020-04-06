#include<bits/stdc++.h>
using namespace std;
pair <int,int> a[110];

int main()
{
    int n,m,i,ans;
    cin >> n >> m ;
    for(i =  0 ;i < n ; i++)
    {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a,a+n);
    for(i = 0 ; i < n ; i++)
    {
        m = m - a[i].first;
        if(m == 0)
        {
            ans = i+1;
            break;
        }
        if(m < 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans  << endl;
    for(int j = 0 ; j < ans ; j++)
    {
        cout << a[j].second << " ";
    }


    return 0;
}
