#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    getchar();
    int i,j,cnt=0;
    char ch[1000][1000];
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
        {
            cin>>ch[i][j];
            if (ch[i][j]=='B' || ch[i][j]=='W' || ch[i][j]=='G')
                cnt++;
        }
    if (cnt==(m*n))
        cout<<"#Black&White"<<endl;
    else
        cout<<"#Color"<<endl;
}
