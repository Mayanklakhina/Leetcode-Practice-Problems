class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>> > minHeap;
            unordered_map<int,int> map;
            
            for(int i=0;i<nums.size();i++){
             //for storing the values with their respective frequency
                    map[nums[i]]++;
            }
            
            for(auto i=map.begin();i!=map.end();i++){
                    minHeap.push({i->second,i->first});
                    
                    if(minHeap.size()>k)
                            minHeap.pop();
            }
            while(minHeap.size()>0){
                    result.push_back(minHeap.top().second);
                    minHeap.pop();
            }
            return result;
    }
};