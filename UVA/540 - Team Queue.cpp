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
#define N 1000000
#define mem(ara) memset(ara,0,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define qi queue<int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ara[N];
bool exist[N];
int main()
{
    int m,n,tc=1;
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        int i,k,p,j;
        vector<qi>vec;
        mem(ara);
        memset(exist,false,sizeof(exist));
        rep0(i,n)
        {
            sf(m);
            rep0(j,m)
            {
                sf(p);
                ara[p]=i;
            }
            qi q;
            vec.pb(q);
        }
        qi q;
        string a;
        pf("Scenario #%d\n",tc++);
        while(1)
        {
            cin>>a;
            if(a[0]=='E')
            {
                sf(k);
                int ind=ara[k];
                if(!exist[ind])
                {
                    exist[ind]=true;
                    q.push(ind);
                }
                vec[ind].push(k);
            }
            else if(a[0]=='D')
            {
                int t=q.front();
                cout<<vec[t].front()<<endl;
                vec[t].pop();
                if(vec[t].size()==0)
                {
                    exist[t]=false;
                    q.pop();
                }
            }
            else
                break;
        }
        puts("");
        while(!q.empty())
            q.pop();
        vec.clear();
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
