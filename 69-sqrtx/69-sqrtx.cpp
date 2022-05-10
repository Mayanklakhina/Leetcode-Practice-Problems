class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        long long  low = 0;
        long long  high = x;
        long long result;
        
        while(low<=high){
            long long mid = (high-low)/2+low;
            
            if(mid*mid==x)
                return mid;
        
            else if(mid*mid<x){
                low=mid+1;
                result = mid;
            }
            else
                high=mid-1;
        }
        return result;
    }
};