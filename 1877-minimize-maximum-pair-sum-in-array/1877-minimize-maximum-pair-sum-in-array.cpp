class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i=0;
        int j = nums.size()-1;
        int maximum = 0;
        
        sort(nums.begin(),nums.end());
       
        
        while(i<j){
            int temp = nums[i]+nums[j];
            maximum = max(temp,maximum);
            i++;
            j--;
        }
        return maximum;
    }
};