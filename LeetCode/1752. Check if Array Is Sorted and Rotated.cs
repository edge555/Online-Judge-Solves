public class Solution {
    public bool Check(int[] nums)
    {
        int n = nums.Length;
        int[] ara = new int[2 * n];
        int mn = Int32.MaxValue;
        for (int i = 0; i < n; i++)
        {
            ara[i] = nums[i];
            ara[i + n] = nums[i];
            mn = Math.Min(mn, nums[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == mn)
            {
                cnt++;
            }
        }
        bool f = false;
        int ii = 0, ind = -1;
        while (ii < 2 * n)
        {
            if (f)
            {
                break;
            }
            if (ara[ii] == mn)
            {
                int st = ii;
                bool t = true;
                for (int j = cnt; j > 0; j--)
                {
                    if (ii == 2 * n)
                    {
                        t = false;
                        break;
                    }
                    if (ara[ii] != mn)
                    {
                        t = false;
                        break;
                    }
                    ii++;
                }
                if (t)
                {

                    ind = st;
                    f = true;
                    break;
                }
            }
            else
            {
                ii++;
            }
        }
        if (ind == -1)
        {
            return false;
        }
        for (int j = ind + 1; j < ind + n; j++)
        {
            if (ara[j - 1] > ara[j])
            {
                return false;
            }
        }
        return true;
    }
} 