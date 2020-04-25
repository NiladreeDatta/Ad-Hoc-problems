#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[28] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(n <= 20)
    {
        cout << s[n] << endl;
    }
    else if(n%10 == 0)
    {
        cout << s[18 + n/10] << endl;
    }
    else cout << s[18+n/10] << "-" << s[n%10] << endl;

    return 0;
}
