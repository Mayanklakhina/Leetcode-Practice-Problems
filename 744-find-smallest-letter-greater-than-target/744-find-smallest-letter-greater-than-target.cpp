class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int low  = 0;
        int high = n-1;
        
        while(low<high){
            int mid = (high-low)/2+low;
            
            if(letters[mid]<=target)
                low=mid+1;
            else
                high=mid;
        }
        if(letters[low]>target){
            return letters[low];
        }
        return letters[0];
    }
};