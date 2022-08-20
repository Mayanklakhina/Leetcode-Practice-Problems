class Solution {
public:
    int myAtoi(string s) {
        stringstream obj(s);
            int result = 0;
            obj >> result;
            
            return result;
    }
};