class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
            
            int i = 0;
            int j = n;
            
            while(j < nums.size()){
                    result.push_back(nums[i]);
                    result.push_back(nums[j]);
                    i++;
                    j++;
            }
            return result;
    }
};