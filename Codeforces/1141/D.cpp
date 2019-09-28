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
int main()
{
    int i,j,n;
    string a,b;
    sf(n);
    cin>>a>>b;
    vector<int>vec[30],vec2[30];
    queue<int>q,q2;
    for(i=0;i<n;i++)
    {
        if(a[i]=='?')
        {
            q.push(i);
            continue;
        }
        int p=a[i]-'a'+1;
        vec[p].push_back(i);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]=='?')
        {
            q2.push(i);
            continue;
        }
        int p=b[i]-'a'+1;
        vec2[p].push_back(i);
    }
    queue<int>ans;
    for(i=1;i<=26;i++)
    {
        int aa=min(vec[i].size(),vec2[i].size());
        int bb=max(vec[i].size(),vec2[i].size());
        for(j=0;j<aa;j++)
        {
            int xx=vec[i][j]+1;
            int yy=vec2[i][j]+1;
            ans.push(xx);
            ans.push(yy);
        }
        if(aa!=bb)
        {
            if(vec[i].size()>vec2[i].size())
            {
                if(q2.empty())
                    continue;
                for(j=aa;j<bb;j++)
                {
                    if(q2.empty())
                        break;
                    int xx=vec[i][j]+1;
                    int yy=q2.front()+1;
                    ans.push(xx);
                    ans.push(yy);
                    q2.pop();
                }
            }
            else
            {
                if(q.empty())
                    continue;
                for(j=aa;j<bb;j++)
                {
                    if(q.empty())
                        break;
                    int yy=vec2[i][j]+1;
                    int xx=q.front()+1;
                    ans.push(xx);
                    ans.push(yy);
                    q.pop();
                }
            }

        }
    }
    while(!q.empty() || !q2.empty())
    {
        ans.push(q.front()+1);
        ans.push(q2.front()+1);
        q.pop();
        q2.pop();
    }
    int p=ans.size();
    pf("%d\n",p/2);
    while(!ans.empty())
    {
        int xx=ans.front();
        ans.pop();
        int yy=ans.front();
        ans.pop();
        pf("%d %d\n",xx,yy);
    }
}
