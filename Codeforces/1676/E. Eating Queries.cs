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
                int n = let[0],q=let[1];
                int[] ara=new int [n];
                ara = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                Array.Sort(ara, 0, n);
                long[] csum = new long[n + 1];
                csum[n] = 0;
                for(int i = n-1; i>=0; i--)
                {
                    csum[i] = csum[i+1] + ara[i];
                }
                Array.Sort(csum);
                
                while (q > 0)
                {
                    int k = int.Parse(Console.ReadLine());
                    int lo = 0, hi = n;
                    int ans = int.MaxValue;
                    while (lo <= hi)
                    {
                        int mid = (lo + hi) / 2;
                        if (csum[mid] >= k)
                        {
                            hi = mid - 1;
                            ans = Math.Min(ans, mid);
                        }
                        else
                        {
                            lo = mid + 1;
                        }
                    }
                    if (ans == int.MaxValue)
                    {
                        ans = -1;
                    }
                    Console.WriteLine(ans);
                    q--;
                }
            }
        }
    }
}