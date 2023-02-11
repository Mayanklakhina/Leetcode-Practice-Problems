class Solution {
public:
        
    int lessOrEqual(vector<int>& nums, int goal){
        int i = 0, j = 0;
        int result = 0;
        int sum = 0;
            if(goal < 0) return 0;
            while(j < nums.size()) {
                            sum += nums[j];
                    
                            while(sum > goal) {
                                    sum -= nums[i];
                                    i++;
                            }
                    result += j-i+1;
                    j++;
            }
            return result;
        }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return (lessOrEqual(nums, goal) - lessOrEqual(nums, goal-1));
    }
};