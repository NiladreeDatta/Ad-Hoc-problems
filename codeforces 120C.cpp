#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    cin >> n >> k;
    int a[n+1];
    int sum = 0;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n ;i++)
    {
        //cin >> a[i];
        if(a[i] < k)
        {
            sum += a[i];
        }
        else if(a[i]/k > 3)
        {
            sum += (a[i] - (k*3));
        }
        else if(a[i]/k <= 3)
        {
            sum += a[i]%k;
        }
    }
    cout << sum << endl;

    return 0;
}
