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
        
        static void Main(string[] args)
        {
            int tc = int.Parse(Console.ReadLine());
            for(int t=1; t<=tc; t++) {
                var let = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                int n = let[0],m=let[1];
                int[,] ara = new int[n + 2, m + 2];
                int[,] ans = new int[n + 2, m + 2];
                for (int i = 0; i < n; i++)
                {
                    string s = Console.ReadLine();
                    for(int j=0;j<m; j++)
                    {
                        if (s[j] == '.')
                        {
                            ara[i, j] = 0;
                        }
                        else if (s[j] == '*')
                        {
                            ara[i, j] = 1;
                        }
                        else
                        {
                            ara[i, j] = -1;
                            ans[i, j] = -1;
                        }
                    }
                }
               
                for(int j = 0; j < m; j++)
                {
                    int i = 0,cnt = 0;
                    while (true)
                    {
                        if (i == n)
                        {
                            for (int k = i - 1; cnt > 0; k--, cnt--)
                            {
                                ans[k, j] = 1;
                            }
                            break;
                        }
                        if (ara[i, j] == 1)
                        {
                            cnt++;
                        }
                        else if (ara[i, j] == -1)
                        {
                            for(int k = i-1;cnt>0 ; k--,cnt--)
                            {
                                ans[k,j] = 1;
                            }
                        }
                        i++;
                    }
                }
                for(int i = 0; i < n; i++)
                {
                    for(int j = 0; j < m; j++)
                    {
                        if (ans[i, j] == 1)
                        {
                            Console.Write("*");
                        }
                        else if (ans[i, j] == -1)
                        {
                            Console.Write("o");
                        }
                        else
                        {
                            Console.Write(".");
                        }
                    }
                    Console.WriteLine("");
                }
            }
        }
    }
}