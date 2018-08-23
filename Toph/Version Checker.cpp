#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long ll;
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string a,b;
    int i,j,k;
    bool chk=false;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' '){
            chk=true;
            i++;
        }
        if(!chk)
            a.pb(s[i]);
        else
            b.pb(s[i]);

    }

    int cnt=0;
    queue<string>qq;
    for (i=0;i<a.size();i++)
    {
       if(a[i]=='.')
            cnt++;
    }
    if(cnt==0)
        qq.push(a);
    else if(cnt==1)
    {
        chk=false;
        string p,q;
        for (i=0;i<a.size();i++)
        {
           if(a[i]=='.')
           {
               chk=true;
               i++;
           }
           if(!chk)
                p.pb(a[i]);
           else
                q.pb(a[i]);
        }
        qq.push(p);
        qq.push(q);
    }
    else if(cnt==2)
    {
        string p,q,r;
        bool chk2=false;
        chk=false;
        for (i=0;i<a.size();i++){
        if(a[i]=='.')
        {
            i++;
            if(chk==true)
                chk2=true;
            chk=true;
        }
        if(chk==false && chk2==false)
            p.pb(a[i]);
        if(chk==true && chk2==false)
            q.pb(a[i]);
        if(chk==true && chk2==true)
            r.pb(a[i]);
        }
        qq.push(p);
        qq.push(q);
        qq.push(r);
    }
    string x="";
    while(!qq.empty())
    {
        string f=qq.front();
        if(f.size()==1)
        {
           x.pb('0');
           x+=f;
        }
        else
            x+=f;
        qq.pop();
    }
    ////////
    cnt=0;
    for (i=0;i<b.size();i++)
    {
       if(b[i]=='.')
            cnt++;
    }
    if(cnt==0)
        qq.push(b);
    else if(cnt==1)
    {
        chk=false;
        string p,q;
        for (i=0;i<b.size();i++)
        {
           if(b[i]=='.')
           {
               chk=true;
               i++;
           }
           if(!chk)
                p.pb(b[i]);
           else
                q.pb(b[i]);
        }
        qq.push(p);
        qq.push(q);
    }
    else if(cnt==2)
    {
        string p,q,r;
        bool chk2=false;
        chk=false;
        for (i=0;i<b.size();i++){
        if(b[i]=='.')
        {
            i++;
            if(chk==true)
                chk2=true;
            chk=true;
        }
        if(chk==false && chk2==false)
            p.pb(b[i]);
        if(chk==true && chk2==false)
            q.pb(b[i]);
        if(chk==true && chk2==true)
            r.pb(b[i]);
        }
        qq.push(p);
        qq.push(q);
        qq.push(r);
    }
    string y="";
    while(!qq.empty())
    {
        string f=qq.front();
        if(f.size()==1)
        {
           y.pb('0');
           y+=f;
        }
        else
            y+=f;
        qq.pop();
    }
    if(x.size()!=6)
    {
        int k=6-x.size();
        while(k--)
            x.pb('0');
    }
    if(y.size()!=6)
    {
        int k=6-y.size();
        while(k--)
            y.pb('0');
    }
    int n1=0,n2=0;
    for (i=0;i<x.size();i++)
    {
        n1*=10;
        int v=x[i]-'0';
        v++;
        n1+=v;
    }
    for (i=0;i<y.size();i++)
    {
        n2*=10;
        int v=y[i]-'0';
        v++;
        n2+=v;
    }
    if(n1>n2)
        cout<<a<<endl;
    else if(n2>n1)
        cout<<b<<endl;
    else
    {
      if(a.size()>b.size())
            cout<<a<<endl;
      else
            cout<<b<<endl;
    }
}
