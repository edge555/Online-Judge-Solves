#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_multiset;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>vec(nums.size(),0);
        ordered_multiset os;
        vec[nums.size()-1]=0;
        os.insert(nums[nums.size()-1]);
        for(int i=nums.size()-2;i>=0;i--){
            vec[i]=os.order_of_key(nums[i]);
            os.insert(nums[i]);
        }
        return vec;
    }
};
