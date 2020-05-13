
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
#define N 100005
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
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
struct trie
{
	struct trie* ara[11];
	int cnt;
};
trie* create()
{
	struct trie *root=NULL;
	root=(trie *)malloc(sizeof(struct trie));
	for(int i=0;i<10;i++)
		root->ara[i]=NULL;
	root->cnt=0;
	return root;
}
void add(trie *root,string s)
{
	int ind=0;
	for(ind=0;ind<s.size();ind++)
	{
	    if(root->ara[s[ind]-'0']==NULL)
            root->ara[s[ind]-'0']=create();
        root=root->ara[s[ind]-'0'];
        root->cnt++;
	}
}
int findoccur(trie *root,string s)
{
	int ind;
	for(ind=0;ind<s.size();ind++)
	{
		if(root->ara[s[ind]-'0']==NULL)
			return 0;
		root=root->ara[s[ind]-'0'];
	}
	return root->cnt;
}
void del(trie *cur)
{
    int i;
    rep0(i,10)
    {
        if(cur->ara[i])
            del(cur->ara[i]);
    }
    delete(cur);
}
int main()
{
	int t,tc;
	cin>>tc;
	rep(t,tc)
	{
	    ll n,q,i;
        cin>>n;
        cin.ignore();
        trie *root=create();
        vector<string>vec;
        rep(i,n)
        {
            string s;
            cin>>s;
            vec.pb(s);
            add(root,s);
        }
        bool f=true;
        rep0(i,n)
        {
            string s=vec[i];
            if(findoccur(root,s)>1)
            {
                f=false;
                break;
            }
        }
        pf("Case %d: ",t);
        puts(f?"YES":"NO");
        del(root);
	}
}
