class Solution {
public:
    //create a function to find out the nearest smaller element on left side with its index
    vector<int> NSL(vector<int>& heights,int n){
        vector<int> left;
        stack<pair<int,int>> s;
        //pair is used to store the index with the element's value
        
        for(int i=0;i<n;i++){
            if(s.size()==0){
                left.push_back(-1);
            }
            else if(s.size()>0 && s.top().first<heights[i]){
                left.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=heights[i]){
                while(s.size()>0 && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0){
                    left.push_back(-1);
                }
                else{
                    left.push_back(s.top().second);
                }
            }
            s.push({heights[i],i});
        }
        return left;
    }
    
   //create a function to find out the nearest smaller element on right side with its index
   
    vector<int> NSR(vector<int>& heights,int n){
        vector<int> right;
        stack<pair<int,int>> s;
        
        for(int i=n-1;i>=0;i--){
            if(s.size()==0){
                right.push_back(heights.size());
            }
            else if(s.size()>0 && s.top().first<heights[i]){
                right.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=heights[i]){
                while(s.size()>0 && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0){
                    right.push_back(heights.size());
                }
                else{
                    right.push_back(s.top().second);
                }
            }
            s.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> nextSmallerRight(n),nextSmallerLeft(n);
        
        nextSmallerRight=NSR(heights,n);
        nextSmallerLeft=NSL(heights,n);
        
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,(nextSmallerRight[i]-nextSmallerLeft[i]-1)*(heights[i]));
        }
        return ans;
    
    }
};