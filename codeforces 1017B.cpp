#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll c1[4] = {'0','0','1','1'};
ll c2[4] = {'0','1','0','1'};
ll ar[4];
int main()
{
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            if(a[i] == c1[j] && b[i] == c2[j])
                ar[j]++;
        }
    }
    cout << ar[0]*ar[2] + ar[0]*ar[3] + ar[1]*ar[2] << endl;


    return 0.;
}
