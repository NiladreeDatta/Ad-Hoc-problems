#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    auto four = count(s.begin(),s.end(),'4');
    auto seven = count(s.begin(),s.end(),'7');
    cout << (four == 0 && seven == 0 ? -1: four >= seven ? 4 : 7 ) << endl;
    return 0;
}
