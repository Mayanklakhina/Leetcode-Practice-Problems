class Solution {
public:
    int firstUniqChar(string s) {
// declare an unordered map which will have a key as a character and value as integer value
        unordered_map<char,int> hash;
        
        for(int i=0;i<s.size();i++){
            //traversing the string and storing the frequency of each character
            hash[s[i]]++;
        }
        
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==1) 
            return i;
            
        }
        return -1;
    
            
    }
    
};