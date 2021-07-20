#include <bits/stdc++.h>
using namespace std;
int n,a,b;
char s[110];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&a,&b);
		scanf("%s",s+1);
		int num=n*a;
		if(b>=0)
		{
			printf("%d\n",num+n*b);
			continue;
		}
		int cnt=1;
		for(int i=2;i<=n;i++)
			if(s[i]!=s[i-1])	cnt++;
		cnt=cnt/2+1;
		printf("%d\n",num+cnt*b);
	}
	return 0;
}
