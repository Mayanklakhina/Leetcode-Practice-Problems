class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //create an unordered map
        unordered_map <int,int> map;
            //declaring a resulting vector
            vector<int> result;
        
            //create a minimum heap
    priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>> > pq;
         for ( int i = 0; i<nums.size();i++){
                 //storing the frequencies
                 map[nums[i]]++;
         }
            
         for(auto i=map.begin();i!=map.end();i++){
                 pq.push({i->second,i->first});
                 
                 if(pq.size() > k)
                 pq.pop();
         }
            while(!pq.empty()){
                    result.push_back(pq.top().second);
                    pq.pop();
            }
            return result;
    }
};