#include<bits/stdc++.h>
using namespace std;
int a[16],n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
        cin>>a[i];
	for(int i=0;i<(1<<n);i++)
	{
		int cnt=0;
		for(int j=1;j<=n;j++) if(i&(1<<(j-1))) cnt+=a[j];else cnt-=a[j];
		if(cnt%360==0) return puts("YES"),0;
	}
	return puts("NO"),0;
}
