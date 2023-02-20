class Solution {
public:
        vector<vector<int>> result;
        
        void combination(int j,vector<int>& candidates, int target, vector<int>& ds){
              if(target == 0)  {
                      result.push_back(ds);
                      return;
              }
              for(int i = j; i < candidates.size(); i++){
                      if(i > j && candidates[i] == candidates[i-1]) continue;
                      
                      if(candidates[i] > target) break;
                      ds.push_back(candidates[i]);
                      combination(i+1, candidates, target-candidates[i], ds);
                      ds.pop_back();
              }
        }
        
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        combination(0, candidates,target, ds);
            
        return result;
    }
};