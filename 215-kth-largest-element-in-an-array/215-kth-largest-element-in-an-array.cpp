class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
            sort(nums.begin(),nums.end(),greater<int>());
            return nums[k-1];
//             //create a minimum heap to get the kth largest element
//         priority_queue<int,vector<int>,greater<int>> minHeap; 
//             //iterate over the given vector nums
//             for(int i=0;i<nums.size();i++){
//                     minHeap.push(nums[i]);
                    
//                     if(minHeap.size()>k)
//                             minHeap.pop();
//             }
//             return minHeap.top();
    }
};