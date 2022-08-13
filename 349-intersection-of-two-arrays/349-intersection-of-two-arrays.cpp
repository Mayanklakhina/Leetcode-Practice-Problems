class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
            
            sort(nums1.begin(),nums1.end());
            
            sort(nums2.begin(),nums2.end());
            
            for(int i=0;i <nums1.size();i++){
                    if(i>0 && nums1[i]==nums1[i-1])
                            continue;
                    for(int j=0;j<nums2.size();j++){
                            if(nums1[i]==nums2[j]){
                                    result.push_back(nums1[i]);
                                    break;
                            }
                    }
            }
            return result;
    }
};