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
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<string,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
struct trie
{
	struct trie* ara[26];
	ll cnt;
};
trie* create()
{
	struct trie *root=NULL;
	root=(trie *)malloc(sizeof(struct trie));
	for(int i=0;i<26;i++)
		root->ara[i]=NULL;
	root->cnt=0;
	return root;
}
void add(trie *root,string s)
{
	if(s.size()==0)
		return ;
	ll ind=0;
	for(ind=0;ind<s.size();ind++)
	{
		if(root->ara[s[ind]-'a']==NULL)
			root->ara[s[ind]-'a']=create();

		root=root->ara[s[ind]-'a'];
		root->cnt++;
	}
}
ll findoccur(trie *root,string s)
{
	if(s.size()==0)
		return 0;
	ll ind;
	for(ind=0;ind<s.size();ind++)
	{
		if(root->ara[s[ind]-'a']==NULL)
			return 0;
		root=root->ara[s[ind]-'a'];
	}
	return root->cnt;
}
int main()
{
	ll n,q,i;
	sll(n,q);
	trie *root=create();
	rep(i,n)
    {
		string s;
		cin>>s;
        add(root,s);
	}
	while(q--)
	{
		string s;
		cin>>s;
		printf("%lld\n",findoccur(root,s));
	}
}
