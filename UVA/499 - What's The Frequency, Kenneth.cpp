#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
map<char,int>freq;
map<char,int>::iterator it;
int main()
{
	char s[10000];
	int mx,i;
	while(gets(s))
    	{
		freq.clear();
		mx=-1;
		for(i=0;s[i];i++)
        	{
			if (isalpha(s[i]))
            		{
				if (freq[s[i]]==0)
					freq[s[i]]=1;
				else
					freq[s[i]]++;
				if (mx<freq[s[i]])
					mx=freq[s[i]];
			}
		}
		for (it=freq.begin();it!=freq.end();it++)
        	{
			if (it->second==mx)
				printf("%c",it->first);
		}
		printf(" %d\n",mx);
	}
}
