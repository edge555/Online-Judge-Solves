#include <bits/stdc++.h>
using namespace std;
int res(int hist[],int m)
{
    stack<int>s;
    int maxsum=-1,i=0,top,tarea=0;
    while (i<m)
    {
        if (s.empty()|| hist[s.top()]<=hist[i])
            s.push(i++);
        else
        {
            top=s.top();
            s.pop();
            tarea=hist[top]*(s.empty()?i:i-s.top()-1);
            maxsum=max(tarea,maxsum);
        }
    }
    while (s.empty()==false)
    {
        top=s.top();
        s.pop();
        tarea=hist[top]*(s.empty()?i:i-s.top()-1);
        maxsum=max(tarea,maxsum);
    }
    cout<<maxsum<<endl;
}
int main()
{
    int n,j;
    while (scanf ("%d",&n)!=0)
    {
        int ara[n+1],i;
        for (i=0;i<n;i++)
            cin>>ara[i];
        res(ara,n);
    }
}
