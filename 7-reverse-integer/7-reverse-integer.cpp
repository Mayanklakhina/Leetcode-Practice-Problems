class Solution {
public:
    int reverse(int x) {
        int result = 0;
            while(x){
                    if(result>INT_MAX/10 || result<INT_MIN/10)
                            return 0;
                    else
                            result=result*10+x%10;
                             x/=10;
            }
            return result;
    }
};