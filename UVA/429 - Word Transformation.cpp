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
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
vector<int>grid[205];
bool vis[205];
int cost[205];
map<string,int>mp;
map<int,string>mp2;

bool diff(string a,string b)
{
    int cnt=0,i;
    rep0(i,a.size())
    {
        if(a[i]!=b[i])
            cnt++;
    }
    if(cnt<=1)
        return true;
    return false;
}
void bfs(string a,string b)
{
    int x=mp[a],y=mp[b],i;
    vis[x]=true;
    cost[x]=0;
    queue<int>q;
    q.push(x);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        rep0(i,grid[p].size())
        {
            int k=grid[p][i];
            if(k==y)
            {
                cout<<cost[p]+1<<endl;
                return;
            }
            if(!vis[k])
            {
                vis[k]=true;
                cost[k]=cost[p]+1;
                q.push(k);
            }
        }
    }
}
int main()
{
    bool space=true;
    int tc,t,j,i;
    sf(tc);
    getchar();
    rep(t,tc)
    {
        mp.clear();
        mp2.clear();
        string a,b;
        vector<string>vec;
        while(1)
        {
            cin>>a;
            if(a[0]=='*')
                break;
            vec.pb(a);
        }

        rep0(i,vec.size())
        {
            mp[vec[i]]=i;
            mp2[i]=vec[i];
        }
        int j;
        rep0(i,vec.size())
        {
            a=vec[i];
            for(j=0;j<vec.size();j++)
            {
                b=vec[j];
                if(a.size()!=b.size())
                    continue;
                if(diff(vec[j],vec[i]))
                {
                    grid[mp[b]].pb(mp[a]);
                    grid[mp[a]].pb(mp[b]);
                }
            }
        }
        getchar();
        while(1)
        {
            string c;
            getline(cin,c);
            if(c=="")
                break;
            a.clear();
            b.clear();
            bool chk=false;
            rep0(i,c.size())
            {
                if(c[i]==' ')
                    chk=true;
                else
                {
                    if(chk)
                        b+=c[i];
                    else
                        a+=c[i];
                }
            }
            memb(vis);
            mem(cost);
            cout<<a<<" "<<b<<" ";
            if(a==b)
            {
                pf("0\n");
                continue;
            }
            bfs(a,b);
        }
        if(t!=tc)
            puts("");
        rep0(i,vec.size())
            grid[i].clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
