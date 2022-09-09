class Solution {
public:
    vector<int>sumvec,sumvec2;
    void generateSeq(int i,vector<int>&nums,int sum,int x){
        if(i==nums.size()){
            if(!x){
                sumvec.push_back(sum);
            }
            else{
                sumvec2.push_back(sum);
            }
            return;
        }
        generateSeq(i+1,nums,sum+nums[i],x);
        generateSeq(i+1,nums,sum,x);
    }
    int minAbsDifference(vector<int>& nums, int goal) {
        vector<int>vec,vec2;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()/2){
                vec.push_back(nums[i]);
            }
            else{
                vec2.push_back(nums[i]);
            }
        }
        generateSeq(0,vec,0,0);
        generateSeq(0,vec2,0,1);
        sort(sumvec2.begin(),sumvec2.end());
        int ans=INT_MAX;
        for(int i=0;i<sumvec.size();i++){
            int x=goal-sumvec[i];
            int ind=lower_bound(sumvec2.begin(),sumvec2.end(),x)-sumvec2.begin();
            if(ind!=sumvec2.size()){
                ans=min(ans,abs(goal-(sumvec[i]+sumvec2[ind])));
            }
            if(ans==0){
                return 0;
            }
            int ind2=upper_bound(sumvec2.begin(),sumvec2.end(),x)-sumvec2.begin();
            ind2--;
            if(ind2>=0){
                ans=min(ans,abs(goal-(sumvec[i]+sumvec2[ind2])));
            }
            if(ans==0){
                return 0;
            }
        }
        return ans;
    }
};
