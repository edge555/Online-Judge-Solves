public class Solution {
    public bool CanThreePartsEqualSum(int[] arr) {
        int sum=0,zero=0;
        foreach(int n in arr){
            sum+=n;
        }
        if(sum%3!=0){
            return false;
        }
        int r=sum/3;
        sum=0;
        int i=0,cnt=0;
        while(i<arr.Length){
            sum+=arr[i];
            if(sum==r){
                cnt++;
                sum=0;
            }
            i++;
            if(cnt==2){
                break;
            }
            
        }
        if(i==arr.Length){
            return false;
        }
        while(i<arr.Length){
            sum+=arr[i++];
        }
        if(cnt<2){
            return false;
        }
        if(sum==r){
            return true;
        }
        return false;
    }
}