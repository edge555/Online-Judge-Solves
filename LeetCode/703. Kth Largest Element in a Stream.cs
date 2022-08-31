public class KthLargest {
    int _k;
    List<int>ara = new List<int>();
    public KthLargest(int k, int[] nums) {
        _k = k;
        foreach(int i in nums){
            ara.Add(i);
        }
    }
    
    public int Add(int val) {
        ara.Add(val);
        ara.Sort();
        int kk = ara.Count-_k+1;
        foreach(int i in ara){
            kk--;
            if(kk==0){
                return i;
            }
            
        }
        return -1;
    }
}