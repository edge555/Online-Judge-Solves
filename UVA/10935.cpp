#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int m,i,x;
    queue<int>n,l;
    while (1)
    {
    cin>>m;
    if (m==0)
        break;
    else
    {
    for (i=1;i<=m;i++)
    {
        n.push(i);
    }
    while (n.size()>1)
    {
        l.push(n.front());
        n.pop();
        x=n.front();
        n.push(x);
        n.pop();
    }

    cout<<"Discarded cards:";
    int k=0,p=l.size();
    while (!l.empty())
    {
        cout<<" "<<l.front();
        if (k<p-1)
        {
        cout<<",";
        k++;
        }
        l.pop();
    }
    cout<<endl;
    cout<<"Remaining card: "<<n.front()<<endl;
    n.pop();
    }
    }
}
