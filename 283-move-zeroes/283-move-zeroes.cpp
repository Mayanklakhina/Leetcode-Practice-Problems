class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        
        for(int j=0;j<=nums.size()-1;j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
              i++;
            }
        }
    }
};