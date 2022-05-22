class Solution {
public:
    int missingNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end());
            if(nums[nums.size()-1]==0){
            return 1;
        }
            int n =nums.size(); ///its last number
           for (int i=0;i< n-1;i++){
//after sorting going thorugh every element with its preceding element if both are equal incerement
            if((nums[i]+1)!=nums[i+1]) {
                return (nums[i] + 1);
            }
                  
             if(nums[n-1]+1==n) {
                return n;
             }
        }    
            return 0;
  
    }
};