class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int result = 0;
        unordered_set<int> hset;
        for (int i = 0, j = 0, win = 0; j < nums.size(); j++) {
            while (hset.find(nums[j]) != hset.end()) {
                hset.erase(nums[i]);
                win -= nums[i];
                i++;
            }
            hset.insert(nums[j]);
            win += nums[j];
            result = max(result, win);
        }
        return result;
    }
};

// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& nums) {
//         int curr_sum=0, res=0;
		
// 		//set to store the elements
//         unordered_set<int> st;
        
//         int i=0,j=0;
//         while(j<nums.size()) {
//             while(st.count(nums[j])>0) {
// 				//Removing the ith element untill we reach the repeating element
//                 st.erase(nums[i]);
//                 curr_sum-=nums[i];
//                 i++;
//             }
// 			//Add the current element to set and curr_sum value
//             curr_sum+=nums[j];
//             st.insert(nums[j++]);
			
// 			//res variable to keep track of largest curr_sum encountered till now...
//             res = max(res, curr_sum);
//         }
        
//         return res;
//     }
// };