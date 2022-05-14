class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
		//starting with the right  most upper corner and start finding 
        int i=0;
        int j=m-1;
        int count=0;
        while(i<n and j>=0)
        {
		//if the element is negative then we have to  count all the vertical element in that point and move to next column.
            if(grid[i][j]<0)
            {
                count+=(n-i);
                j--;
            }
			//if it is positve then we know that all element in that vertical part is negative so we move to next row.
            else
            {
                i++;
            }
            
        }
        return count;
         
    }
};