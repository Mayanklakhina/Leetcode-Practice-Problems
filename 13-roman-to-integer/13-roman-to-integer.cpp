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
            
            //condition for let's say this roman numerals IV = 4 (5-1)
            if(hash[s[i]]<hash[s[i+1]])
                sum-=hash[s[i]];    //so for IV here, sum would be -1
            else
                sum+=hash[s[i]];    //-1+5=4 (for next iteration when i=1)
        }
        return sum;
    }
};