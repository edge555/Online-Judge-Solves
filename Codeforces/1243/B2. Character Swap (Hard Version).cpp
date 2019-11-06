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
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    while(tc--)
    {
        int i,n,j;
        string a,b;
        cin>>n>>a>>b;
        unordered_map<char,int>mp;
        rep0(i,n)
        {
            mp[a[i]]++;
            mp[b[i]]++;
        }
        bool chk=true;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->se&1)
            {
                chk=false;
                break;
            }
        }
        if(!chk)
        {
            cout<<"No"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        queue<pi>q;
        rep0(i,n)
        {
            if(a[i]==b[i])
                continue;
            int ind=-1;
            for(j=i+1;j<n;j++)
            {
                if(a[j]==a[i])
                {
                    ind=j;
                    break;
                }
            }
            if(ind!=-1)
            {
                char temp=b[i];
                b[i]=a[i];
                a[ind]=temp;
                q.push({ind,i});
            }
            else
            {
                for(j=i+1;j<n;j++)
                {
                    if(b[j]==a[i])
                    {
                        ind=j;
                        break;
                    }
                }
                char temp=a[n-1];
                a[n-1]=a[i];
                b[ind]=temp;
                q.push({n-1,ind});
                temp=a[n-1];
                a[n-1]=b[i];
                b[i]=temp;
                q.push({n-1,i});
            }
        }
        cout<<q.size()<<endl;
        while(!q.empty())
        {
            pi p=q.front();
            q.pop();
            cout<<p.fi+1<<" "<<p.se+1<<endl;
        }
    }
}
