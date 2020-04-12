#include<bits/stdc++.h>
using namespace std;
bool check(int sum,int n)
{
    return sum*10 >= n*45;
}
int main()
{
    vector <int> v;
    int sum = 0;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        sum += x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int count = 0;
    /*while(!check(sum,n))
    {
        sum += (5-v[count]);
        count++;
    }*/
    for(int i = 0 ; i < n ; i++)
    {
        if(sum*10 >= 45*n)
        {
            break;
        }
        else
        {
            sum += (5-v[i]);
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
