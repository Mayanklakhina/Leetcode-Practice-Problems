class Solution {
public:
    bool judgeSquareSum(int c) {
        //using two pointers technique
        long long int low = 0, high=sqrt(c); 
        
        //here sqrt is a function that will return the square of a number 
        
        while(low<=high){
            if(low*low+high*high==c){ 
                return true;
            }
            else if(low*low+high*high>c){
                high--;                      
            }
            else{
                low++;
            }
        }
        return false;
    }
};