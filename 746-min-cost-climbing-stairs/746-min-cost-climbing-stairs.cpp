class Solution {
public:
 int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int t[n];
        
        //Initialization
        t[0] = cost[0];
        t[1] = cost[1];
        
        //Knapsack 01
        for(int i=2; i<n; i++){
            t[i] = cost[i] + min(t[i-1], t[i-2]);
        }
        //Return answer
        return min(t[n-1], t[n-2]);
    }
};