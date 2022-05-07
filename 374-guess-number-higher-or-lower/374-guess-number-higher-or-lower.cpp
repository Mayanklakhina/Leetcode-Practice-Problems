/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        //store the minimum number first into a variable "minNumber"
        int minNumber = 1;
        //store the maximum number into a variable "maxNumber" 
        int maxNumber = n;
        
        //now the value picked should be between maxNumber and minNumber
        
        while(true){
            //making our guess and storing into a variable "midNumber"
            int midNumber = (maxNumber - minNumber) / 2 + minNumber;
            //putting our guess into a variable "result" by using the predefined API given above already
            int result = guess(midNumber);
            
            //after that use three possible results returned by predefined API and apply binary search simply 
            if(result == 0)
                return midNumber;
            else if(result==1)
                minNumber = midNumber+1;
            else
                maxNumber = midNumber-1;
        }
    }
};