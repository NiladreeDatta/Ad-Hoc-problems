#include<bits/stdc++.h>
using namespace std;

int n,k;
vector <int> a;
string s;
int main()
{
    cin >> n >> k;
    for(int i = 0 ; i < n ; i ++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cin >> s;
    long long int sum = 0;
    for(int i = 0 , j = 0 ; i < n ; i = j)
    {
        while(j < n && s[i] == s[j])
            j++;
        sort(a.begin()+i,a.begin()+j);
        reverse(a.begin()+i,a.begin()+j);

        for(int b = i ; b < min(i+k,j) ; b++)
            sum += a[b];
    }
    cout << sum << endl;

    return 0;
}
