class Solution {
public:
    int search(vector<int>& nums, int target) {
        //initialized a variable n which stores the size of the vector "nums"
        int n = nums.size();
        //low variable stores the lowest index.
        int low = 0;
        //high variable stores the highest index.
        int high = n-1;
        
        while(low<=high){
            //finding the middle point of the given sorted array and store into a variable "mid"
            int mid = (low+high)/2;
            
            if(nums[mid]==target)
                return mid;
    
            else if(nums[mid]>target)
                high=mid-1;                //ignore the right half
            else
                low=mid+1;                 //ignore the left half
        }
        //if target does not exist then return -1
        return -1;
    }
};