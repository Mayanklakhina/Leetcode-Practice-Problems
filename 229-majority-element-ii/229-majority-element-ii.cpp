class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
            int n=nums.size();
            unordered_map<int,int> map;
            for(int i=0;i<n;i++){
                    map[nums[i]]++;
            }
            for(auto x=map.begin();x!=map.end();x++){
                    if(x->second>(n/3))
                            result.push_back(x->first);
            }
            return result;
    }
};