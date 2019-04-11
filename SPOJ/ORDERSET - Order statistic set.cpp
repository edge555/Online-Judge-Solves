#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 200005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
unordered_map<int,int>mp;
vector<pair<char,int>> vec;
vector<int> bit(N,0),a;
void reset()
{
    vec.clear();
	a.clear();
	mp.clear();
}
void insert(int val,int x,int n)
{
	if(x>n)
        return;
	bit[x]+=val;
	insert(val,x+(x&(-x)),n);
}
int query(int x)
{
     int sum=0;
     for(;x>0;x-=x&-x)
         sum+=bit[x];
     return sum;
}

int search(int val)
{
	int i,j,k,x,y,z,ans=a.size();
	x=0,y=a.size()-1;
	while(x<=y)
    {
		z=(x+y)/2;
		if(query(mp[a[z]])>=val)
		{
			ans=z;
			y=z-1;
		}
        else
			x=z+1;
	}
	return ans;
}
int main()
{
	int i,j,k,x,y,z,n;
	sf(n);
	reset();
	char c;
	rep0(i,n)
    {
		cin>>c;
        sf(j);
		vec.pb(mpp(c,j));
		mp[j]=1;
	}
	for(auto x:mp)
		a.pb(x.fi);
    sort(all(a));
    rep0(i,a.size())
           mp[a[i]]=1+i;
	rep0(i,n)
	{
		if(vec[i].fi=='I')
		{
            if(query(mp[vec[i].se])==query(mp[vec[i].se]-1))
                insert(1,mp[vec[i].se],a.size());
		}
        else if(vec[i].fi=='D')
		{
			if(query(mp[vec[i].se])!=query(mp[vec[i].se]-1))
				insert(-1,mp[vec[i].se],a.size());
		}
		else if(vec[i].fi=='K')
        {
			j=search(vec[i].se);
			if(j==a.size())
				puts("invalid");
            else
				pf("%d\n",a[j]);
        }
		else
        {
			j=lower_bound(a.begin(),a.end(),vec[i].se)-a.begin();
			j--;
			if(j<0)
				puts("0");
			else
				pf("%d\n",query(mp[a[j]]));
		}
	}
}
