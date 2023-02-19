class Solution {
public:
    vector<vector<int>> result;
        
    void subset(int i, vector<int>&sub, vector<int>&nums){
            //base condition
            int n = nums.size();
            if(i >= n) {result.push_back(sub); return;}
            
            sub.push_back(nums[i]);
            //recursive call for taking up the next element
            subset(i+1, sub, nums);
            
            sub.pop_back();
            //recursive call for not taking up the element
            subset(i+1, sub, nums);
            
            
    }
        
        
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        subset(0, sub, nums);
            
            return result;
    }
};