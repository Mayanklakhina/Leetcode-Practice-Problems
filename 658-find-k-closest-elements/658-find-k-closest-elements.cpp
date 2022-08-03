class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //create a max heap
            priority_queue<pair<int,int>> pq;
            vector<int>result;
            
            for(int i=0;i<arr.size();i++){
                    pq.push({abs(arr[i]-x),arr[i]});
                    
                    if(pq.size()>k)
                            pq.pop();
            }
            while(pq.size()>0){
                    result.push_back(pq.top().second);
                    pq.pop();
            }
            sort(result.begin(),result.end());
            return result;
    }
};