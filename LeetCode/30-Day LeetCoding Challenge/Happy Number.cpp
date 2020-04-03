class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool>mp;
        int m=n;
        while(1)
        {
            int r=0;
            while(m)
            {
                r+=(m%10)*(m%10);
                m/=10;
            }
            if(r==1)
                return true;
            if(mp[r])
                return false;
            mp[r]=true;
            m=r;
        }
        return false;
    }
};
