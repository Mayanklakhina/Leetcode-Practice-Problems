class Solution {
public:
    
    int leastInterval(vector<char>& tasks, int n) {
        
        // ans variable for storing least number of units of times that the CPU will take
        int ans=0;
        unordered_map<char,int> mp;
        priority_queue<int> q;
        
        // storing count of each character in map
        for(auto i: tasks){
            mp[i]++;
        }
        
        // Pushing all elements to the Priority Queue
        for(auto j: mp){
            q.push(j.second);
        }
        
        while(!q.empty()){
            
            // tt variable for storing time for executing n task 
            int tt=0;
            
            // vector v for storing the element that is popped from the queue ((element -1) is pushed)
            vector<int> v;
            
            // executing the n+1 task
            for(int i=0;i<=n;i++){
                if(!q.empty()){
                    v.push_back(q.top()-1);
                    q.pop();
                    tt=tt+1;
                }
            }
            
             // If elements in vector are still greater than 0 then again push them back to the priority queue)
            for(auto i: v){
                if(i>0){
                    q.push(i);
                }
            }
            
            // If all the task are over(priority queue is empty) then adding 'tt' to the ans variable otherwise adding n+1 which includes idle time as well
            if(q.empty()){
                ans+=tt;
            }
            else{
                ans+=(n+1);
            }
            
            
        }
        
        // Returning the final least number of units of time
        return ans;
    }
};