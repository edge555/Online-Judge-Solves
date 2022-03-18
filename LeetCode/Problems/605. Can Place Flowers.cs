public class Solution {
    public bool CanPlaceFlowers(int[] flowerbed, int n) {
        if(n==0){
            return true;
        }
        int i=0,len=flowerbed.Length,cnt=0;
        if(len==1){
            if(n>1){
                return false;
            }
            if(flowerbed[0]!=0){
                return false;
            }
            return true;
        }
        while(i<len){
            if(flowerbed[i]==1){
                i++;
                continue;
            }
            if(i==0){
                if(i+1<len){
                    if(flowerbed[i+1]==0){
                        cnt++;
                        flowerbed[i]=1;
                    }   
                }
            }
            else if(i==len-1){
                if(flowerbed[i-1]==0){
                    cnt++;
                    flowerbed[i]=1;
                }
            }
            else{
                if(i-1>=0 && i+1<len){
                    if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                        flowerbed[i]=1;
                        cnt++;
                    }
                }
            }
            i++;
        }
        return cnt>=n;
    }
}