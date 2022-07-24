class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
            int low=0, high=n-1;
            if(nums.size()==1)
                    return nums[0];
            if(nums[high-1]!=nums[high])
                    return nums[high];
            if(nums[low+1]!=nums[low])
                    return nums[low];
            
            while(low<=high){
                    int mid = low+(high-low)/2;
                    
                    if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid])
                            return nums[mid];
                    if(mid%2==0){
                      if(nums[mid-1]==nums[mid])
                           high=mid-1;
                      else
                           low=mid+1;
                    }
                    else if(mid%2!=0){
                      if(nums[mid-1]==nums[mid])
                          low=mid+1;
                      else
                           high=mid-1;
                    }

            }
            return nums[low];
    }
};