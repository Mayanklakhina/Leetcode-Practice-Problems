class Solution {
    public int removeDuplicates(int[] nums) {
        int j=0;
        int n = nums.length;
        
        if(n==0||n==1)
            return n;
        
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j])
                j++;
            nums[j] = nums[i];

        }
              return j+1;
    }
}