class Solution {
public:
    int arr[50001];
    struct node
    {
        int sum,prop;
    }tree[200001];
    int query(int cur,int st,int en,int l,int r)
    {
        if(st>en || st>r || en<l)
            return 0;
        if(tree[cur].prop!=0)
        {
            tree[cur].sum=(en-st+1)*tree[cur].prop;
            if(st!=en)
            {
                tree[2*cur].prop=tree[cur].prop;
                tree[2*cur+1].prop=tree[cur].prop;
            }
            tree[cur].prop=0;
        }
        if(st>=l && en<=r)
            return tree[cur].sum;
        int mid=(st+en)/2;
        int left=2*cur,right=left+1;
        int ans1=query(left,st,mid,l,r);
        int ans2=query(right,mid+1,en,l,r);
        return ans1+ans2;
    }
    void assign(int cur,int st,int en,int l,int r,int val)
    {
        if(tree[cur].prop)
        {
            tree[cur].sum=(en-st+1)*tree[cur].prop;
            if(st!=en)
            {
                tree[2*cur].prop=tree[cur].prop;
                tree[2*cur+1].prop=tree[cur].prop;
            }
            tree[cur].prop=0;
        }
        if(st>en || st>r || en<l)
            return;
        if(st>=l && en<=r)
        {
            tree[cur].sum=(en-st+1)*val;
            if(st!=en)
            {
                tree[2*cur].prop=val;
                tree[2*cur+1].prop=val;
            }
            return;
        }
        int mid=(st+en)/2;
        int left=2*cur,right=left+1;
        assign(left,st,mid,l,r,val);
        assign(right,mid+1,en,l,r,val);
        tree[cur].sum=tree[left].sum+tree[right].sum;
    }
    vector<int> amountPainted(vector<vector<int>>& paint) {
        vector<int>ans;
        int n = 50000;
        for(auto v:paint){
            int st=v[0],en=v[1]-1;
            int r=en-st+1;
            int sum=query(1,0,n,st,en);
            ans.push_back(r-sum);
            assign(1,0,n,st,en,1);
        }
        return ans;
    }
};
