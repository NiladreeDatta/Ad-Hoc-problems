#include<bits/stdc++.h>
using namespace std;
const int max_n = 100;
string s[max_n];

int main()
{
    set <string> st;
    int n,m,i;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> s[i];
        st.insert(s[i]);
    }

    vector <string> left,right;
    string mid;
    for(int i = 0 ; i < n ; i ++)
    {
        string t = s[i];
        reverse(t.begin(),t.end());
        /*Check a string itself is a palindrome or not if it is then mid = s[i] */
        if(t == s[i]) mid = t;
        /*if there exist a reverse string of s[i] then put that string
        ans s[i] to the both end*/
        else if(st.find(t) != st.end())
        {
            right.push_back(s[i]);
            left.push_back(t);
            st.erase(s[i]);
            st.erase(t);
        }
    }
    cout << left.size()*2*m + mid.size() << endl;
    for(string x : left)
        cout << x;
    cout << mid;
    reverse(right.begin(),right.end());
    for(string x  : right)
        cout << x;
    cout << endl;
    return 0;
}
