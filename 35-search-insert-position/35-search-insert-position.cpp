class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        
        while(low<=high){
             mid = (high-low)/2 + low;
            
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
     }
        return low;
        // if(nums[mid+1]>target)
        //     return mid+1;
        // else 
        //     return mid+2;
        // if(nums[mid-1]>target)
        //     return mid-2;
        // else
        //     return mid-1;
    }
};