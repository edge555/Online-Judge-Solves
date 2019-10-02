#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
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
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
string s;
int n,q;
int sum[27][4*N];
bool mp[27];
void build(int pos,int L, int R,char chr)
{
    if(L==R)
    {
        sum[chr-'a'][pos]=(s[L-1]==chr);
        return;
    }
    int mid=(L+R)>>1;
    build(pos*2,L,mid,chr);
    build(pos*2+1,mid+1,R,chr);
    sum[chr-'a'][pos]=sum[chr-'a'][pos*2]+sum[chr-'a'][pos*2+1];
}
int query(int pos,int L,int R,int l,int r,char chr)
{
    if(r<L || R<l)
        return 0;
    if(L>=l && R<=r)
        return sum[chr-'a'][pos];
    int mid=(L+ R)>>1;
    int x=query(pos*2,L,mid,l,r,chr);
    int y=query(pos*2+1,mid+1,R,l,r,chr);
    return x+y;
}
void update(int pos,int L,int R,int ind,char chr,char chr2)
{
    if(ind<L || ind>R)
        return ;
    if(L==R)
    {
        sum[chr-'a'][pos]=0;
        sum[chr2-'a'][pos]=1;
        return;
    }
    int mid=(L+R)>>1;
    int x=pos<<1;
    int y=x+1;
    update(x,L,mid,ind,chr,chr2);
    update(y,mid+1,R,ind,chr,chr2);
    sum[chr-'a'][pos]=sum[chr-'a'][x]+sum[chr-'a'][y];
    sum[chr2-'a'][pos]=sum[chr2-'a'][x]+sum[chr2-'a'][y];
}
int main()
{
    FAST;
    cin>>s>>q;
    n=s.size();
    int i;
    rep0(i,n)
        mp[s[i]-'a']=true;
    rep0(i,26)
    {
        if(mp[i])
            build(1,1,n,'a'+i);
    }
    int type,ind,l,r;
    char chr;
    while(q--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>ind>>chr;
            if(s[ind-1]!=chr)
            {
                update(1,1,n,ind,s[ind-1],chr);
                s[ind-1]=chr;
            }
        }
        else
        {
            int cnt=0;
            char p='a';
            cin>>l>>r;
            for(p='a';p<='z';p++)
            {
                if(query(1,1,n,l,r,p))
                    cnt++;
            }
            cout<<cnt<<endl;
        }
    }
}
