class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
     int sum=0,i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
                if(i<=j&&nums1[i]<=nums2[j])
                    sum=max(sum,j-i);
            else
            i++;
            j++;
            }
        return sum;
    }
};