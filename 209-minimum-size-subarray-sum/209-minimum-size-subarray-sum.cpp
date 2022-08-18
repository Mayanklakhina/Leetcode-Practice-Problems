class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, i = 0, j = 0, result = INT_MAX;
            while ( j < nums.size()){
                    sum += nums[j];
                    
                    if(sum < target){
                            j++;
                    }
                    else{
                    while(sum >= target){
                            result = min(result, j-i+1);
                            sum -= nums[i];
                            i++;
                           
                    }
                            j++;
                    }
            }
            if(result == INT_MAX)
                    return 0;
            return result;
    }
};