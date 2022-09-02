class Solution {
public:
    bool rotateString(string s, string goal) {
        //edge case
            if(s.size() != goal.size())
                    return false;
            s += s;
            return(s.find(goal) != string::npos);
    }
};