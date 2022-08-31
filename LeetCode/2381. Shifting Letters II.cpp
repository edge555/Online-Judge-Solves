class Solution {
    public:
    int tree[200005],lazy[200005];
    void update(int node,int a,int b,int i,int j,int value)
    {
        if(lazy[node]!=0)
        {
            tree[node]+=lazy[node];
            if(a!= b)
            {
                lazy[node*2]+=lazy[node];
                lazy[node*2+1]+=lazy[node];
            }
            lazy[node]=0;
        }
        if(a>b || a>j || b<i)
            return;
        if(a>=i && b<=j)
        {
            tree[node]+=value;
            if(a!=b)
            {
                lazy[node*2]+=value;
                lazy[node*2+1]+=value;
            }
            return;
        }
        int mid=(a+b)/2;
        update(node*2,a,mid,i,j,value);
        update(1+node*2,1+mid,b,i,j,value);
        tree[node]=tree[node*2]+tree[node*2+1];
    }
    int query(int node,int a,int b,int i,int j)
    {
        if(a>b || a>j || b<i)
            return 0;
        if(lazy[node]!=0)
        {
            tree[node]+=lazy[node];
            if(a!=b)
            {
                lazy[node*2]+=lazy[node];
                lazy[node*2+1]+=lazy[node];
            }
            lazy[node]=0;
        }
        if(a>=i && b<=j)
            return tree[node];
        int mid=(a+b)/2;
        int q1=query(node*2,a,mid,i,j);
        int q2=query(1+node*2,1+mid,b,i,j);
        int res=q1+q2;
        return res;
    }
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        for(auto v:shifts){
            int l=v[0],r=v[1];
            if(v[2]==1){
                update(1,0,n-1,l,r,1);
            }
            else{
                update(1,0,n-1,l,r,-1);
            }
        }
        for(int i=0;i<s.size();i++){
            int r=query(1,0,n-1,i,i);
            if(r>0){
                r%=26;
                char ch=s[i];
                while(r--){
                    if(ch=='z'){
                        ch='a';
                    }
                    else{
                        ch++;
                    }

                }
                s[i]=ch;
            }
            else if(r<0){
                r*=-1;
                r%=26;
                char ch=s[i];
                while(r--){
                    if(ch=='a'){
                        ch='z';
                    }
                    else{
                        ch--;
                    }
                }
                s[i]=ch;
            }
        }
        return s;
    }
};
