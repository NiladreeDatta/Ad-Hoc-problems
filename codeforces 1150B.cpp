#include<bits/stdc++.h>
using namespace std;

int n;
char ch[55][55];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%s",ch[i]+1);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(ch[i][j]=='.'&&ch[i+1][j]=='.'&&ch[i-1][j]=='.'&&ch[i][j+1]=='.'&&ch[i][j-1]=='.')
				ch[i][j]=ch[i+1][j]=ch[i-1][j]=ch[i][j+1]=ch[i][j-1]='#';
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(ch[i][j]=='.')
			{
				printf("NO");
				return 0;
			}
	printf("YES");
}
