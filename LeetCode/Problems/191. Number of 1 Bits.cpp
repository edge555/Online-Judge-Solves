class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcountll(n);
    }
};
