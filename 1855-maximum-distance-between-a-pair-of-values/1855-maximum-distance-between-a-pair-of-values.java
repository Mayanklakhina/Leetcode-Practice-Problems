class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int sum = 0,i=0,j=0;
        while(i<nums1.length&&j<nums2.length){
            if(i<=j&&nums1[i]<=nums2[j])
                sum=Math.max(sum,j-i);
            else
                i++;
            j++;
        }
        return sum;
    }
}