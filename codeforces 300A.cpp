#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    vector <int> pos,neg,zero;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        if(x > 0) pos.push_back(x);
        if(x < 0) neg.push_back(x);
        if(x == 0) zero.push_back(x);
    }
    if(neg.size()% 2 == 0)
    {
        zero.push_back(neg.back());
        neg.pop_back();
    }
    if(pos.size() == 0)
    {
        for(int i =0  ; i < 2 ; i++)
        {
            pos.push_back(neg.back());
            neg.pop_back();
        }
    }
    cout << neg.size() << " ";
    for(int i = 0  ; i < neg.size() ; i++)
    {
        cout << neg[i] << " ";
    }
    cout << endl;
    cout << pos.size() << " ";
    for(int i = 0  ; i < pos.size() ; i++)
    {
        cout << pos[i] << " ";
    }
    cout << endl;
    cout << zero.size() << " ";
    for(int i = 0  ; i < zero.size() ; i++)
    {
        cout << zero[i] << " ";
    }
    cout << endl;

    return 0;
}
