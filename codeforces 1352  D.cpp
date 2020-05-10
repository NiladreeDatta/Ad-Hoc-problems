#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin >> tc;
    while(tc--)
    {
        cin >> n ;
        int a[n+2];
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        int i = 1 , j = n-1;
        int ac = a[0],bc = 0,x=a[0],y=0;
        int m = 1;
        while(i <= j)
        {
            m++;
            while(i <= j and bc <= ac)
            {
                y += a[j];
                bc += a[j--];
                //y += a[j];
            }
            ac = 0;
            if(i <= j)
            {
                m++;
                //ac = 0;
            }
            while(i <= j and ac <= bc)
            {
                x += a[i];
                ac += a[i++];
                //x += a[i];
            }
            bc = 0;
        }
        cout << m << " "<< x << " "<< y << endl;
    }



    return 0;
}
