public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
        int[] freq = new int[1005];
        int[] freq2 = new int[1005];
        for(int i=0;i<1005;i++){
            freq[i]=0;
            freq2[i]=0;
        }
        foreach(int num in nums1){
            freq[num]++;
        }
        List<int> list = new List<int>();
        foreach(int num in nums2){
            freq2[num]++;
        }
        for(int i=0;i<1005;i++){
            if(freq[i]>0 && freq2[i]>0){
                list.Add(i);
            }
        }
        return list.ToArray();
    }
}