#include<bits/stdc++.h>
using namespace std;

int A[1005][1005];
char ara[1005][1005];

int hist(int hist[],int k)
{
	stack<int>s;

	int top,maxa=0,ta=0,i=0;
	while (i<k)
	{
		if (s.empty() || hist[s.top()]<=hist[i])
			s.push(i++);
		else
		{
			top=hist[s.top()];
			s.pop();
			ta=top*i;

			if (!s.empty())
				ta=top*(i-s.top()-1);
			maxa=max(ta,maxa);
		}
	}


	while (!s.empty())
	{
		top=hist[s.top()];
		s.pop();
		ta=top*i;
		if (!s.empty())
			ta=top*(i-s.top()-1);
		maxa=max(ta, maxa);
	}
	return maxa;
}

int maxRectangle(int R,int C)
{
    int i,j;
    int res=hist(A[0],C);
    for (i=1;i<R;i++)
    {
	for (j=0;j<C;j++)
	{
		if (A[i][j])
             	   A[i][j] += A[i-1][j];

		res=max(res,hist(A[i],C));
	}
	return res;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int r,c,i,j;
    cin>>r>>c;
    for (i=0;i<r;i++)
        for (j=0;j<c;j++){
            cin>>ara[i][j];
            if (ara[i][j]=='F')
                A[i][j]=1;
            else
                A[i][j]=0;
        }

	cout<<3*maxRectangle(r,c)<<endl;
    }
	return 0;
}
