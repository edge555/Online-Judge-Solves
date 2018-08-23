#include<bits/stdc++.h>
using namespace std;

int A[101][101];
int ara[101][101];
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
			top = hist[s.top()];
			s.pop();
			ta = top * i;

			if (!s.empty())
				ta = top * (i-s.top()-1);
			maxa = max(ta, maxa);
		}
	}


	while (!s.empty())
	{
		top = hist[s.top()];
		s.pop();
		ta = top * i;
		if (!s.empty())
			ta = top * (i - s.top() - 1 );

		maxa = max(ta, maxa);
	}
	return maxa;
}

int maxRectangle(int R,int C)
{
        int i,j;
	int res = hist(A[0],C);
	for (i=1;i<R;i++)
	{
		for (j=0;j<C;j++)

		if (A[i][j])
              	  A[i][j] += A[i - 1][j];

		res=max(res,hist(A[i],C));
	}
	return res;
}
int main()
{

	int r,c,i,j;
	while (1){
        cin>>r>>c;
        if (r==0 && c==0)
       	     return 0;
	for (i=0;i<r;i++)
           for (j=0;j<c;j++){
               cin>>ara[i][j];
               if (ara[i][j]==1)
                   A[i][j]=0;
               else
                   A[i][j]=1;
        }
	cout<<maxRectangle(r,c)<<endl;
	}

	return 0;
}
