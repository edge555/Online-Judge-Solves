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
int dx[]={0,0,0,1,1,1,2,2,2};
int dy[]={0,1,2,0,1,2,0,1,2};
int main()
{
    string a[10];
    int i,j;
    rep0(i,9)
        cin>>a[i];
    set<char>st;
    bool chk=true;
    rep0(i,9)
    {
        st.clear();
        rep0(j,9)
            st.insert(a[i][j]);
        if(st.size()!=9)
            chk=false;
    }
    rep0(i,9)
    {
        st.clear();
        rep0(j,9)
            st.insert(a[j][i]);
        if(st.size()!=9)
            chk=false;
    }
    vector<pi>vec={{0,0},{0,3},{0,6},{3,0},{3,3},{3,6},{6,0},{6,3},{6,6}};
    rep0(i,vec.size())
    {
        pi pr=vec[i];
        int x=pr.fi,y=pr.se;
        st.clear();
        rep0(j,9)
        {
            int xx=x+dx[j],yy=y+dy[j];
            st.insert(a[xx][yy]);
        }
        if(st.size()!=9)
            chk=false;
    }
    if(chk)
        pf("Congratulations!");
    else
        pf("Oh No!");

    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
