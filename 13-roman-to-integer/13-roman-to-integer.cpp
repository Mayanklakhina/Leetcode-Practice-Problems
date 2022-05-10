class Solution {
public:
    int romanToInt(string s) {
        //store the variables into an unordered map named as "hash"
        unordered_map<char,int> hash={ { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
                                  

        int sum = 0; //declare sum as 0 initially
        int n = s.size();
        
        for(int i=0;i<n;i++){
            
            if(hash[s[i]]<hash[s[i+1]])
                sum-=hash[s[i]];
            else
                sum+=hash[s[i]];
        }
        return sum;
    }
};