#include<bits/stdc++.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char ara[100000];
		long long int i,a=0,b=0,dot=0,flag=0,k;
		scanf("%s",ara);
		k=strlen(ara);
		for(i=0;i<k;i++)
		{
			char ch;
			if(ara[i]=='A'||ara[i]=='B')
			{
				if(ara[i]=='A')
					a++;
				else
					b++;
				if(flag==0)
				{
					ch=ara[i];
					dot=0;
					flag=1;
				}
				else if(flag==1)
				{
					if(ara[i]==ch)
					{
						if(ara[i]=='A')
							a+=dot;
						else if(ara[i]=='B')
                                b+=dot;
                                dot=0;
					}
					dot=0;
					ch=ara[i];
				}
			}
			else if(ara[i]=='.')
			{
				dot++;
			}
		}
		printf ("%lld  %lld\n",a,b);
	}
	return 0;
}
