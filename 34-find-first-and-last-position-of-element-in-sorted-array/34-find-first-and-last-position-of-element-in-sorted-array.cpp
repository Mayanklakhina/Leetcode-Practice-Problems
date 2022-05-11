class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int n = nums.size();
        int low = 0;
        int high=n-1;
        int i,j;
  
        
        
        while(low<=high){
            int mid = (high-low)/2+low;
            if(nums[mid]==target){
                int temp = mid;
                
                while(mid>0 && nums[mid-1]==target)
                    mid--;
                  i = mid;
                while(temp<nums.size()-1&&nums[temp+1]==target)
                    temp++;
                j=temp;
             
        result.push_back(i);
        result.push_back(j);
                return result;
   
            }
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        result.push_back(-1);
        
        result.push_back(-1);
        return result;
    }
};