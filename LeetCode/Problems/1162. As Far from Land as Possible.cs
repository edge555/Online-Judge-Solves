public class Solution {
    static int[,] vis = new int[101,101];
    static int[,] dis = new int[101,101];
    static int[] dx = { 0, 0, 1, -1 };
    static int[] dy = { 1, -1, 0, 0 };
    struct node
    {
        public int x, y;
        public node(int _x, int _y)
        {
            x = _x;
            y = _y;
        }
    }
    struct nodePair
    {
        public node n;
        public int dis;
        public nodePair(int _dis,node _n)
        {
            dis = _dis;
            n = _n;
        }
    }
    static void pre(int row)
    {
        for(int i = 0; i < row; i++)
        {
            for(int j=0;j < row; j++)
            {
                vis[i, j] = 0;
                dis[i, j] = int.MaxValue;
            }
        }
    }
    static bool valid(int x,int y,int dim)
    {
        return x>=0 && x<dim && y>=0 && y<dim && vis[x,y]==0;
    }
    static int Bfs(Queue<node> temp,int row)
    {
        pre(row);
        Queue<nodePair> q = new Queue<nodePair>();
        foreach(node n in temp)
        {
            q.Enqueue(new nodePair(0,n));
            vis[n.x,n.y] = 1;
            dis[n.x, n.y] = 0;
        }
        while(q.Count > 0)
        {
            nodePair np = q.Dequeue();
            int d = np.dis;
            node u = np.n;
            int x = u.x,y= u.y;
            for(int i = 0; i < 4; i++)
            {
                int xx = x + dx[i];
                int yy = y + dy[i];
                if (valid(xx, yy, row))
                {
                    if (dis[xx,yy] > dis[x,y] + 1)
                    {
                        dis[xx, yy] = dis[x, y] + 1;
                        vis[xx, yy] = 1;
                        q.Enqueue(new nodePair(dis[xx, yy], new node(xx, yy)));
                    }
                }
            }
        }
        int mx = -1;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < row; j++)
            {
                mx = Math.Max(mx, dis[i, j]);
            }
        }
        
        return mx;
    }
    public int MaxDistance(int[][] grid) {
        Queue<node> q = new Queue<node>();
        int water = 0,land = 0;
        for(int i = 0; i < grid.Length; i++)
        {
            for(int j = 0; j < grid[i].Length; j++)
            {
                if (grid[i][j] == 1)
                {
                    land++;
                    q.Enqueue(new node( i, j));
                }
                else{
                    water++;
                }
            }
        }
        if(land == 0 || water == 0){
            return -1;
        }
        return Bfs(q,grid.Length);   
    }
}