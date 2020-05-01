#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 1 , a = 0 , b[1000];
    while(x+x+1 <= n) b[a++] = x , n -= x++;

    b[a++] = n;
    cout << a << endl;
    for(int i =0 ; i < a ; i++)
        cout << b[i] << " ";
    cout << endl;

    return 0;
}
