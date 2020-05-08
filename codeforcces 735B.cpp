#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,n1,n2;
    cin >> n >> n1 >> n2;
    long long a[n+1];
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    sort(a+1,a+n+1);
    long long s1=0,s2=0;
    if(n1 > n2) swap(n1,n2);

    for(int i = n ; i >= n - n1 + 1 ; i--)
    {
        s2 += a[i];
    }
    for(int i = n - n1 ; i >= n-n1-n2+1 ; i--)
    {
        s1 += a[i];
    }
    //cout << (double)s1/(double)n1 + (double)s2 / (double)n2 << endl;
    printf("%.12Lf\n",1.0*s2/n1 + 1.0*s1/n2);
    return 0;
}
