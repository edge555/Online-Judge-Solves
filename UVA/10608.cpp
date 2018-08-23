#include<stdio.h>
#include<string.h>

static int par[100000];
static int r[100000];
static int cnt[100000];

int mx;

void intset(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=i;
        r[i]=0;
        cnt[i]=1;
    }
}

int findpar(int x)
{
    if( x!= par[x])
        par[x]=findpar(par[x]);
    return par[x];
}

bool sameset(int x,int y)
{
    return findpar(x)==findpar(y);
}

void chk(int x, int y)
{
    if(!sameset(x,y))
    {

        if(r[x]>r[y])
        {
            par[y]=x;
            cnt[x]+=cnt[y];
            mx=(mx<cnt[x])?cnt[x]:mx;
        }
        else{
            par[x]=y;
            cnt[y]+=cnt[x];
            mx=(mx<cnt[y])?cnt[y]:mx;

            if(r[x]==r[y])
                r[y]=r[y]+1;
        }

    }
}

void makeset(int x,int y)
{
    chk(findpar(x),findpar(y));
}

int main()
{
    int n,m,i,j,t;
    scanf ("%d",&t);

    while(t--)
        {
            scanf ("%d %d",&n,&m);
            intset(n);
            mx=1;
            while(m--)
            {
                scanf ("%d %d",&i,&j);
                --i;
                --j;
                makeset(i,j);
            }
            printf ("%d\n",mx);
        }
    return 0;
}
