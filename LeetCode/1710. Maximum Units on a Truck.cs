public class Solution {
    public int MaximumUnits(int[][] boxTypes, int truckSize) {
        boxTypes = boxTypes.OrderBy(inner => inner[1]).ToArray();
        int sum = 0;
        for (int i = boxTypes.Length-1; i >=0 ; i--)
        {
            if(truckSize>= boxTypes[i][0])
            {
                sum+=boxTypes[i][0]*boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else
            {
                sum += truckSize * boxTypes[i][1];
                truckSize = 0;
                break;
            }
        }
        return sum;
    }
}