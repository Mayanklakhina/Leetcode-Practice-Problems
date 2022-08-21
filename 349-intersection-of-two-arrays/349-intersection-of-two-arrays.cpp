class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
            unordered_set<int>  s;
            
            int j;
            for(j=0;j<nums1.size();j++){
                    s.insert(nums1[j]);
            }
            for(int i=0;i<nums2.size();i++){
                    if(s.find(nums2[i])!=s.end())
                            result.push_back(nums2[i]);
                    s.erase(nums2[i]);
            }
            
            return result;
    }
};