using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Globalization;
using System.Numerics;

namespace ConsoleApp1
{
    class Solution
    {
        static bool valid(int x, int y, int n, int m)
        {
            return x >= 0 && x < n && y >= 0 && y < m;        
        }

        static void Main(string[] args)
        {
            int t, tc;
            tc = int.Parse(Console.ReadLine());
            for (t = 1; t <= tc; t++)
            {
                var let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                int n = let[0],m=let[1];
                int[,] ara = new int[n + 1, m + 1];
                for(int i = 0; i < n; i++)
                {
                    let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                    for(int j=0;j< m; j++)
                    {
                        ara[i, j] = let[j];
                    }
                }
                int mx = -1;
                for(int i = 0; i < n; i++)
                {
                    for(int j = 0; j < m; j++)
                    {
                        int sum = 0;
                        int ii = i, jj = j;
                        while (valid(ii, jj,n,m))
                        {
                            sum += ara[ii, jj];
                            ii++;
                            jj++;
                        }
                        ii = i;
                        jj = j;
                        while (valid(ii, jj, n, m))
                        {
                            sum += ara[ii, jj];
                            ii--;
                            jj--;
                        }
                        ii = i;
                        jj = j;
                        while (valid(ii, jj, n, m))
                        {
                            sum += ara[ii, jj];
                            ii++;
                            jj--;
                        }
                        ii = i;
                        jj = j;
                        while (valid(ii, jj, n, m))
                        {
                            sum += ara[ii, jj];
                            ii--;
                            jj++;
                        }
                        sum -= 3 * ara[i, j];
                        mx = Math.Max(mx, sum);
                    }
                }
                Console.WriteLine(mx);
            }
        }
    }
}