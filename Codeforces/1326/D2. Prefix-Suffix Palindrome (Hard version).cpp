#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 2000005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("ousut.txt","w",stdout);
typedef long long int ll;
using namespace std;
int pref[N];
string max_prefix(string a)
{
	int i,j;
	string s;
	s=a;
	reverse(all(s));
	s=a+"!"+s;
	j=0;
	for(i=1;i<s.size();i++)
	{
		while(j>0 && s[j]!=s[i])
			j=pref[j-1];
		if(s[j]==s[i])
			j++;
		pref[i]=j;
	}
	s=a.substr(0,j);
	return s;
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        string a;
        cin>>a;
        int i=0;
        while(i<a.size()-i-1 && a[i]==a[sz(a)-i-1])
            i++;
        string sl="",sr="";
        if(i)
        {
            sl=a.substr(0,i);
            sr=sl;
            reverse(all(sr));
        }
        cout<<sl;
        if(sz(a)>2*i)
        {
            a=a.substr(i,sz(a)-2*i);
            string temp1=max_prefix(a);
            reverse(all(a));
            string temp2=max_prefix(a);
            if(sz(temp1)<sz(temp2))
                cout<<temp2;
            else
                cout<<temp1;
        }
        cout<<sr<<endl;
    }
}
