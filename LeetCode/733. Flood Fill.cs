public class Solution {
    static int[,] grid = new int[51,51];
    static int[,] vis = new int[51,51];
    static int[] dx = { 0, 0, 1, -1 };
    static int[] dy = { 1, -1, 0, 0 };
    static void pre(int n,int m, int[][] image)
    {
        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vis[i,j] = 0;
                grid[i,j] = image[i][j];
            }
        }
    }
    static bool valid(int x,int y,int n,int m,int color)
    {
        return x>= 0 && y >= 0 && x<n && y<m && vis[x,y]==0 && grid[x,y]==color;
    }
    static void dfs(int x,int y,int n,int m,int color)
    {
        vis[x,y] = 1;
        for(int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (valid(xx, yy,n,m,color))
            {
                dfs(xx, yy, n, m, color);
            }
        }
    }
    public int[][] FloodFill(int[][] image, int sr, int sc, int newColor) {
        int n = image.Length, m = image[0].Length;
        pre(n, m, image);
        dfs(sr, sc,n,m,image[sr][sc]);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if (vis[i,j] == 0)
                {
                    image[i][j] = grid[i,j];
                }
                else
                {
                    image[i][j] = newColor;
                }
            }
        }
        return image;
    }
}