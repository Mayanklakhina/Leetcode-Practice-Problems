class Solution {
public:
   vector<vector<int>> result;
        
        void combination(vector<int>& candidates, int target, vector<int>& ds,int i){
                int n = candidates.size();
                //base condition
                if(i == n){
                        if(target == 0){
                                result.push_back(ds);
                        }
                               return;
                }
                
                ds.push_back(candidates[i]);
                if(candidates[i] <= target){
                combination(candidates, target-candidates[i], ds, i);
                }
                
                ds.pop_back();
                
                combination(candidates, target, ds, i+1);
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
         combination(candidates, target, ds, 0);
            
            return result;
    }
};