#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc;
    sf(tc);
    while(tc--)
    {
        ll n,m;
        cin>>n;
        m=n;
        int ara[12],i;
        memset(ara,0,sizeof(ara));
        bool fvfreq=false,frdig=false,thrcons=false,twocons=false;
        for (i=0;i<=9;i++)
        {
            ara[i]=n%10;
            n/=10;
        }
        reverse(ara,ara+10);
        for (i=0;i<=6;i++)
        {
            if(ara[i+3]-ara[i+2]==1 && ara[i+2]-ara[i+1]==1 && ara[i+1]-1==ara[i]){
                frdig=true;
                break;
            }
        }
        if(frdig==false)
        {
            for (i=0;i<=7;i++)
            {
                if(ara[i]==ara[i+1] && ara[i]==ara[i+2])
                {
                    thrcons=true;
                    break;
                }
            }
            if(thrcons==false)
            {
                int freq[12];
                memset(freq,0,sizeof(freq));
                while(m!=0)
                {
                    freq[m%10]++;
                    m/=10;
                }
                for (i=0;i<10;i++)
                {
                    if(freq[i]>=5){
                        fvfreq=true;
                        break;
                    }
                }
            }
            if(fvfreq==false)
            {
                bool first=false;
                for (i=0;i<9;i++)
                {
                    if(ara[i]==ara[i+1])
                    {
                        ara[i]=-1;
                        ara[i+1]=-1;
                        first=true;
                        break;
                    }
                }
                for (i=0;i<9;i++)
                {
                    if((ara[i]-ara[i+1]==0 && ara[i]!=-1) && first==true){
                        ara[i]=-1;
                        ara[i+1]=-1;
                        break;
                    }
                }
                int cnt=0;
                for (i=0;i<10;i++)
                {
                    if(ara[i]==-1)
                        cnt++;
                }
                if(cnt==4)
                    twocons=true;
            }
        }
        if(twocons==true || fvfreq==true || thrcons==true || frdig==true)
            puts("Fancy");
        else
            puts("Not Fancy");
    }
}
