class Solution {
public:
    int bitwiseComplement(int n) {
            if(n==0)
                    return 1;
        vector<int> temp; 
		// convert to binary representation
        while( n != 0 ){
            temp.push_back( n % 2 );
            n /= 2;
        } 
		// make complement
        for(int i=0; i<temp.size(); i++){
            if( temp[i] == 1 ) temp[i] = 0;
            else if( temp[i] == 0 ) temp[i] = 1;
        } 
            int result=0;
            for(int i=temp.size()-1;i>=0;i--){
                    result =result*2+temp[i];
            }
            return result;
    }
};