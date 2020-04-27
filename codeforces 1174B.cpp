#include<bits/stdc++.h>
using namespace std;
bool ex[2];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n ; i++)
    {
        ex[a[i]%2] = 1;
    }
    if(ex[0] and ex[1])
    {
        sort(a,a+n);
    }
    for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
    cout <<  endl;


    return 0;
}
