#include<bits/stdc++.h>
using namespace std;
int a[27];
int main()
{
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == 'a') a[1]++;
        if(s[i] == 'b') a[2]++;
        if(s[i] == 'c') a[3]++;
        if(s[i] == 'd') a[4]++;
        if(s[i] == 'e') a[5]++;
        if(s[i] == 'f') a[6]++;
        if(s[i] == 'g') a[7]++;
        if(s[i] == 'h') a[8]++;
        if(s[i] == 'i') a[9]++;
        if(s[i] == 'j') a[10]++;
        if(s[i] == 'k') a[11]++;
        if(s[i] == 'l') a[12]++;
        if(s[i] == 'm') a[13]++;
        if(s[i] == 'n') a[14]++;
        if(s[i] == 'o') a[15]++;
        if(s[i] == 'p') a[16]++;
        if(s[i] == 'q') a[17]++;
        if(s[i] == 'r') a[18]++;
        if(s[i] == 's') a[19]++;
        if(s[i] == 't') a[20]++;
        if(s[i] == 'u') a[21]++;
        if(s[i] == 'v') a[22]++;
        if(s[i] == 'w') a[23]++;
        if(s[i] == 'x') a[24]++;
        if(s[i] == 'y') a[25]++;
        if(s[i] == 'z') a[26]++;
    }
    int del = 0, one = 0;
    for(int i = 0 ; i < 27 ; i++)
    {
        if(a[i] > 2)
        {
            del += (a[i]%2);
        }
        if(a[i] == 1)
            one++;
    }
    del = max(0,del + one - 1);
    if(del%2 == 0)
    {
        cout << "First" << endl;
    }
    else cout << "Second" << endl;

    return 0;
}
