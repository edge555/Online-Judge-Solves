public class Solution {
    public IList<int> TwoOutOfThree(int[] nums1, int[] nums2, int[] nums3) {
        int[,] ara= new int[101,4];
        Array.Clear(ara,0,ara.Length);
        for(int i=0;i<nums1.Length;i++){
            ara[nums1[i],0]=1;
        }
        for(int i=0;i<nums2.Length;i++){
            ara[nums2[i],1]=1;
        }
        for(int i=0;i<nums3.Length;i++){
            ara[nums3[i],2]=1;
        }
        List<int>ans = new List<int>();
        for(int i=0;i<101;i++){
            int sum=ara[i,0]+ara[i,1]+ara[i,2];
            if(sum>1){
                ans.Add(i);
            }
        }
        return ans;
    }
}