class Solution {
public:
      vector<vector<int>> result;
        
     void subset(int ind, vector<int>&sub, vector<int>&nums){
                result.push_back(sub);
             
             for(int i = ind; i<nums.size(); i++){
                     if(i != ind && nums[i] == nums[i-1]) continue;
                     
                     sub.push_back(nums[i]);
                     subset(i+1, sub, nums);
                     sub.pop_back();
             }
    }
       
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
             sort(nums.begin(), nums.end());
             vector<int> sub;
             subset(0, sub, nums);
            
            return result;
    }
};