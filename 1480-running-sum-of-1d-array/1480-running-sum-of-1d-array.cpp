class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int runningSum=0;
        vector<int>result(n);
        for(int i=0;i<n;i++){
            result[i] = runningSum +nums[i];
            runningSum = runningSum + nums[i];
        }
        return result;
    }
    
};