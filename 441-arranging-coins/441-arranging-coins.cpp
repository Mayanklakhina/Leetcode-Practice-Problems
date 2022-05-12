class Solution {
public:
    int arrangeCoins(int n) {
        long low = 1,high=n;
        while(low<=high){
            long mid = low+(high-low)/2;
            long temp = mid * (mid + 1) / 2;
            
            if (temp == n) return mid;
            
            if (temp <= n) 
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return low-1;
   
   
        }
};