#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        long long int sum = 1;
        for(long long int i = 1 ; i <= 1000 ; i++)
        {
            sum = sum + pow(2,i);
            if(n%sum == 0)
            {
                cout << n/sum << endl;
                break;
            }
        }
    }

    return 0;
}
