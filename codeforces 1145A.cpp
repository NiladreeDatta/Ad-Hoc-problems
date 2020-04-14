#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[16];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    for(int i = n ; i >= 0 ; i = i / 2 )
    {
        for(int j = 0 ; j < n ; j += i)
        {
            if(is_sorted(a+j,a+j+i))
            {
                cout << i << endl;
                return 0;
            }
        }
    }


    return 0;
}
