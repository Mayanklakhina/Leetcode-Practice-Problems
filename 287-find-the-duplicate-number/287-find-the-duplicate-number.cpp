class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
        
        int duplicateNo = 0;
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i+1]) {
                duplicateNo = nums[i];
                break;
            }
        return duplicateNo;
    
    }
};