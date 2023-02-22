class Solution {
public:
     vector<vector<int>> result;
        
    void permutation(vector<int>& nums, int freq[], vector<int>& ds){
            //base condition
            if(ds.size() == nums.size()){
                    result.push_back(ds);
                    return;
            }
            
            for(int i = 0; i < nums.size(); i++){
                    if(freq[i] == 0) {
                            ds.push_back(nums[i]);
                            freq[i] = 1;
                            permutation(nums, freq, ds);
                            freq[i] = 0;
                            ds.pop_back();
                    }
            }
    }
        
        
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
            
         int freq[nums.size()];
            
            for(int i = 0; i < nums.size(); i++){freq[i] = 0;}
            
            permutation(nums, freq, ds);
            
            return result;
    }
};