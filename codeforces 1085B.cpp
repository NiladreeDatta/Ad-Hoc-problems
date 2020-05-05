#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int p=k-1;
    while(n%p!=0)
    {
        p--;
    }
    cout<<n/p*k+p;
    return 0;

}
