class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
                int temp1 = num/10;
                int temp2 = num%10;
                num = temp1+temp2;
                
        }
            return num;
    }
};