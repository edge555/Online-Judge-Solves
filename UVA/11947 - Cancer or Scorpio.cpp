#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool leap(int n)
{
    if (n%4==0 && n%100!=0)
        return true;
    if (n%400==0)
        return true;
    return false;
}
int main()
{
    int tc,j;
    sf(tc);
    rep(j,tc)
    {
        int n;
        sf(n);
        int d,m,y;
        y=n%10000;
        n/=10000;
        d=n%100;
        n/=100;
        m=n;
        int td=280;
        while(td!=0)
        {
            if(m==2)
            {
                if(leap(y)==true)
                {
                    if(d==29)
                    {
                        d=1;
                        m++;
                    }
                    else
                        d++;
                }
                else
                {
                    if(d==28)
                    {
                        d=1;
                        m++;
                    }
                    else
                        d++;
                }
            }
            else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
            {
                if(d==31)
                {
                    d=1;
                    m++;
                }
                else
                    d++;
            }
            else if(m==4 || m==6 || m==9 || m==11)
            {
                if(d==30)
                {
                    d=1;
                    m++;
                }
                else
                    d++;
            }
            else
            {
                if(d==31)
                {
                    d=1;
                    m=1;
                    y++;
                }
            else
                d++;
            }
            td--;
        }
        pf("%d %02d/%02d/%d ",j,m,d,y);
        if(m==1)
        {
            if(d<=20)
                pf("capricorn");
            else
                pf("aquarius");
        }
        else if(m==2)
        {
            if(d<=19)
                pf("aquarius");
            else
                pf("pisces");
        }
        else if(m==3)
        {
            if(d<=20)
                pf("pisces");
            else
                pf("aries");
        }
        else if(m==4)
        {
            if(d<=20)
                pf("aries");
            else
                pf("taurus");
        }
        else if(m==5)
        {
            if(d<=21)
                pf("taurus");
            else
                pf("gemini");
        }
        else if(m==6)
        {
            if(d<=21)
                pf("gemini");
            else
                pf("cancer");
        }
        else if(m==7)
        {
            if(d<=22)
                pf("cancer");
            else
                pf("leo");
        }
        else if(m==8)
        {
            if(d<=21)
                pf("leo");
            else
                pf("virgo");
        }
        else if(m==9)
        {
            if(d<=23)
                pf("virgo");
            else
                pf("libra");
        }
        else if(m==10)
        {
            if(d<=23)
                pf("libra");
            else
                pf("scorpio");
        }
        else if(m==11)
        {
            if(d<=22)
                pf("scorpio");
            else
                pf("sagittarius");
        }
        else if(m==12)
        {
            if(d<=22)
                pf("sagittarius");
            else
                pf("capricorn");
        }
        puts("");
    }
}
