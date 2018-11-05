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
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
char dice[10],dice2[10];
char frnt,bck,rght,lft,top,btm;
void setdice()
{
    top=dice2[0];
    btm=dice2[1];
    frnt=dice2[2];
    lft=dice2[3];
    bck=dice2[4];
    rght=dice2[5];
}
void yaxisdown()
{
    setdice();
    dice2[0]=frnt;
    dice2[1]=bck;
    dice2[2]=btm;
    dice2[4]=top;
}
void zaxisleft()
{
    setdice();
    dice2[0]=rght;
    dice2[1]=lft;
    dice2[3]=top;
    dice2[5]=btm;
}
void xaxisright()
{
    setdice();
    dice2[2]=lft;
    dice2[3]=bck;
    dice2[4]=rght;
    dice2[5]=frnt;
}
int main()
{
    int t,tc,i,j;
    sf(tc);
    getchar();
    rep(t,tc)
    {
        string a,b,c,d;
        cin>>a>>b;
        if(a==b)
            puts("Equal");
        else
        {
            c=a;sort(all(c));
            d=b;sort(all(d));
            if(c!=d)
            {
                pf("Not Equal\n");
                continue;
            }
            bool chk=true;
            rep0(i,6)
            {
                dice[i]=a[i];
                dice2[i]=b[i];
            }
            queue<int>q;
            int topcount=0;
            rep0(i,6)
            {
                if(dice2[i]==dice[0])
                    q.push(i);
            }
            bool ans=false;
            while(!q.empty())
            {
                int k=q.front(),cnt;
                q.pop();
                rep(i,6)
                    dice2[i]=b[i];
                if(k==2)
                    yaxisdown();
                else if(k==4)
                {
                    rep0(i,3)
                        yaxisdown();
                }
                else if(k==1)
                {
                    rep0(i,2)
                        yaxisdown();
                }
                else if(k==5)
                    zaxisleft();
                else if(k==3)
                {
                    rep0(i,3)
                        zaxisleft();
                }
                rep0(j,4)
                {
                    xaxisright();
                    cnt=0;
                    rep0(i,6)
                    {
                        if(dice[i]==dice2[i])
                            cnt++;
                    }
                    if(cnt==6)
                    {
                        ans=true;
                        continue;
                    }
                }
            }
            if(ans)
                puts("Equal");
            else
                puts("Not Equal");
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
