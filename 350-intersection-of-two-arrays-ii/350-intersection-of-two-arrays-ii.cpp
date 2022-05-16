class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        map<int,int> hash;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        for(int i=0;i<n1;i++){
            hash[nums1[i]]++;
        }
        
        for(int i=0;i<n2;i++){
            if(--hash[nums2[i]] >= 0) {
                result.push_back(nums2[i]);
            }
            }
            
        return result;
    }
};