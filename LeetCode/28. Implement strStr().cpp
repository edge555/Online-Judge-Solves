class Solution {
public:
    int strStr(string haystack, string needle) {
        int found=haystack.find(needle);
        if (found==string::npos)
            found=-1;
        return found;
    }
};
