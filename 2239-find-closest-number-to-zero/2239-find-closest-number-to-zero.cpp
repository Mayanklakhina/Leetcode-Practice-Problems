class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int result = INT_MAX;
            for(auto &it : nums){
                    if(abs(it) < abs(result))
                            result = it;
                    if(abs(it) == abs(result))
                            result = max(result,it);
            }
            return result;
    }
};