#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,i,m,a,x=0;
    scanf("%d:%d",&h,&m);
    cin >> a;
    int total = h*60 + m + a;
    printf("%02d:%02d\n",(total/60)%24,total%60);

    return 0;
}
