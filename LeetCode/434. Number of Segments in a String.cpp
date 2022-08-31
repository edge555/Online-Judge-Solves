class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        int cnt=0;
        string a;
        while(ss>>a)
            cnt++;
        return cnt;
    }
};
