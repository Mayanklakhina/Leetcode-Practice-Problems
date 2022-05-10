class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ret;
        vector<int> path(k);
        int i = 0;
        int curSum = 0;
        
        while(i!=-1){
            path[i]++;
            curSum++;
            if(path[i]>9 || curSum > n || (i!=k-1 && curSum+path[i] >= n) ){
                curSum -= path[i];
                i--;
            }else if(i == k-1){
                if(curSum == n) ret.push_back(path);
            }else if(curSum+path[i] < n){
                path[i+1] = path[i];
                curSum += path[i];
                i++;
            }
        }
        return ret;
    }
};