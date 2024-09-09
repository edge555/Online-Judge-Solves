class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0,sumB=0;
        for(auto x:aliceSizes){
            sumA+=x;
        }
        for(auto x:bobSizes){
            sumB+=x;
        }
        int x=(sumA-sumB)>>1;
        for(int i=0;i<aliceSizes.size();i++){
            for(int j=0;j<bobSizes.size();j++){
                if(aliceSizes[i]==bobSizes[j]+x){
                    return {aliceSizes[i],bobSizes[j]};
                }
            }
        }
        return {};
    }
};
