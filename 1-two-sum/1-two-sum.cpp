class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> hash;
        vector<int> result;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int ans = target-nums[i];
            
            if(hash.find(ans)!=hash.end()){
                result.push_back(hash[ans]);
                
                result.push_back(i);
                return result;
            }
            hash[nums[i]]=i;
            
        }
        return result;
        
    }
};