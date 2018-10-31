#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
	int tc;
	sf(tc);
	while(tc--)
	{
	    int n,m,i,j,cnt1,cnt2;
	    sff(n,m);
	    char a[n][m];
	    rep0(i,n)
            scanf("%s",a[i]);

	    for(i=0,cnt1=0,cnt2=0;i<n;i++)
	    {
	        rep0(j,m)
	        {
	            if((i+j)%2==0)
	            {
                    if(a[i][j]=='R')
                        cnt2+=5;
                    else
                        cnt1+=3;
	            }

	            else
                {
                    if(a[i][j]=='R')
                        cnt1+=5;
                    else
                        cnt2+=3;
	            }
	        }
	    }
        if (cnt2>cnt1)
            pf("%d\n",cnt1);
        else
            pf("%d\n",cnt2);
	}
}
