class Solution {
public:
        
    void recursion(int i, vector<char>& s, int n) {
            if(i >= n/2) return;
            
            swap(s[i],s[n-i-1]);
            recursion(i+1, s, n);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        recursion(0, s, n);     
    }
};