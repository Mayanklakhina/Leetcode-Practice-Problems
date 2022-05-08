class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        
        //firstly initialize a variable peak and assume the peak index value as 0
        int peak = 0;
        
        for(int i = 1;i<n;i++){
    //now we are checking that if the element present at i is greater than element present at index peak so we will update the value of peak index.
            if(arr[i]>arr[peak])
                peak=i;
        }
        return  peak;
    }
};