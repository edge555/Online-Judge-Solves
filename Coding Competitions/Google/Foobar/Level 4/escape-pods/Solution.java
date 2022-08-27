import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class Solution {
    public static List<Integer> bfs(int[][] res_mat) {
        int n = res_mat.length;
        int[] par = new int[n + 1];
        Arrays.fill(par, -1);
        Queue<Integer> q = new LinkedList<>();
        q.add(0);
        int i, u, v;
        while (true) {
            if (q.isEmpty() || par[n - 1] != -1)
                break;
            u = q.peek();
            q.remove();
            for (i = 0; i < n; i++) {
                if (res_mat[u][i] > 0 && par[i] == -1) {
                    q.add(i);
                    par[i] = u;
                }
            }
        }
        List<Integer> path = new ArrayList<>();
        u = par[n - 1];
        if (u == -1)
            return null;
        while (u != 0) {
            if (u == -1)
                return null;
            path.add(u);
            u = par[u];
        }
        Collections.reverse(path);
        return path;
    }
    
    public static int ford_fulkerson(int[][] res_mat) {
        int maxflow = 0;
        List<Integer> path;
        List<Integer> bfs_path;
        while (true) {
            bfs_path = bfs(res_mat);
            if (bfs_path == null)
                break;
            path = bfs_path;
            int i, u = 0, v, res_cap = Integer.MAX_VALUE;
            for (i = 0; i < path.size(); i++) {
                v = path.get(i);
                res_cap = Math.min(res_cap, res_mat[u][v]);
                u = v;
            }
            maxflow += res_cap;
            u = 0;
            for (i = 0; i < path.size(); i++) {
                v = path.get(i);
                res_mat[u][v] -= res_cap;
                res_mat[v][u] += res_cap;
                u = v;
            }
        }
        return maxflow;
    }

    public static int solution(int[] entrances, int[] exits, int[][] path) {
        int i, j, n = path.length;
        int[][] res_mat = new int[n + 2][n + 2];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                res_mat[i + 1][j + 1] = path[i][j];
            }
        }
        for (i = 0; i < entrances.length; i++) {
            res_mat[0][entrances[i] + 1] = Integer.MAX_VALUE;
        }
        for (i = 0; i < exits.length; i++) {
            res_mat[exits[i] + 1][n + 1] = Integer.MAX_VALUE;
        }
        return ford_fulkerson(res_mat);
    }
}