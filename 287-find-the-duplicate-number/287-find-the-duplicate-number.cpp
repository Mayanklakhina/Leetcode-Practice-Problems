class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
        
//         int duplicateNo = 0;
//         for(int i = 0; i < nums.size() - 1; i++)
//             if(nums[i] == nums[i+1]) {
//                 duplicateNo = nums[i];
//                 break;
//             }
//         return duplicateNo;
                int left = 1, right = nums.size() - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            
            // count the number of elements smaller/ equal than middle element
            int c = 0;
            for(const int& el: nums)
                if(el <= mid)
                    ++c;
            
            if(c > mid)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    
    
    }
};