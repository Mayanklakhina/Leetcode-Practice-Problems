class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, start = 0, end = 0;
            int result = INT_MAX;
            while ( end < nums.size() ) {
                    sum += nums[end];
                    
                    if(sum < target){
                            end++;
                    }
                    else{
                    while(sum >= target){
                            result = min(result, end - start + 1);
                            sum -= nums[start];
                            start++;
                           
                    }
                            end++;
                    }
            }
            if(result == INT_MAX)
                    return 0;
            return result;
    }
};